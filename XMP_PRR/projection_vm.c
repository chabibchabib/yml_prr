//AHMED CHABIB -M2 CHPS, UVSQ-MAISON DE LA SIMULATION
/* Ce programme est une implémentation XMP de l'étape de la projection de l'algorithme de PRR
 On suppose qu'on a une grille 1 D de processeurs, Il faut que la taille n soit divisible par 
le nombre de processeurs appelé  dans l'étape de l'éxécution. Les résultats sont vérifiés par 
Octave */
//NB: Les étapes 3.1,3.2 de l'algorithme peuvent être encore parallélisée 


#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include<math.h>
int  n =6; int m=3; 
#pragma xmp nodes p(1,*)
#pragma xmp template t(0:n-1,0:n-1)
#pragma xmp distribute t(block,block) onto p

int main(int argc, char ** argv){
double c[2*m]; double Vm[n][m];
double sum=0; 
	// Matrice 
 double A[n][n];
#pragma xmp align A[i][j] with t(j,i)
	// vecteurs divisés sur les processeurs 
double x[n];
#pragma xmp align x[i] with t(*,i)
double y_0[n];
#pragma xmp align y_0[i] with t(*,i)
double y_1[n];
#pragma xmp align y_1[i] with t(*,i)
	// vecteurs connus par tous les processeurs 
double yy_0[n];
#pragma xmp align yy_0[j] with t(j,*)
double yy_1[n];                      // Pour afficher 
#pragma xmp align yy_1[j] with t(j,*)

	//INITIALIATION A 
  #pragma xmp loop (i,j) on t(j,i)
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
	A[i][j]=0;
	if(i==j) A[i][j]=1;
	else if (j==i+1) A[i][j]=2;
	else if (j==i-1) A[i][j]=-2;
    	}
  }

	// INITIALISATION X 
  #pragma xmp loop (i) on t(*,i)
    for(int i=0;i<n;i++){
			 x[i]=0;
			if (i==0) x[i]=1;
    				}

	// ETAPE1: normalisation de x;
c[0]=1;
#pragma xmp loop (i) on t(j,i) reduction(+:sum)
    			for(int i=0;i<n;i++){
				sum+=x[i]*x[i];
    					}
sum=sqrt(sum);
  			
#pragma xmp loop (i) on t(*,i)
    for(int i=0;i<n;i++){
			y_0[i]=x[i]/sum;
    				}
// colonne 0 de Vm
#pragma xmp loop (i) on t(*,i)
    for(int i=0;i<n;i++){
			Vm[i][0]=y_0[i];
    				}


	// ETAPE 2: y_1=A*y_0
#pragma xmp gmove
 yy_0[:]=y_0[:];
#pragma xmp loop (i) on t(*,i) reduction(+:sum)
  for (int i=0;i<n;i++){
			sum=0;
 			 #pragma xmp loop (j) on t(j,*)
    			for(int j=0;j<n;j++){
				sum+=A[i][j]*yy_0[j];
    					}
			y_1[i]=sum;
  			}


	// ETAPE 3: Boucle 
for (int k=1; k<m;k++){
			// etape 3.1 C(2k-1)=(y_k,y_(k-1))	
			sum=0;

			#pragma xmp loop (i) on t(j,i) reduction(+:sum)
    			for(int i=0;i<n;i++){
				sum+=y_0[i]*y_1[i];
    					}
			c[2*k-1]=sum;
			// etape 3.2 C(2k)=(y_k,y_k)	
			sum=0;

			#pragma xmp loop (i) on t(j,i) reduction(+:sum)
    			for(int i=0;i<n;i++){
				sum+=y_1[i]*y_1[i];
    					}
			c[2*k]=sum;

			// etape 3.3 mise à jour
			#pragma xmp loop (i) on t(j,i) 
			for(int i=0;i<n;i++){
				y_0[i]=y_1[i];
    					}
			// etape 3.4 y_k+1=A*y_k
			#pragma xmp gmove
			yy_0[:]=y_1[:];
			  // colonne k de Vm
			#pragma xmp loop (i) on t(j,i)
    			for(int i=0;i<n;i++){
			Vm[i][k]=y_1[i];
    				}
			#pragma xmp loop (i) on t(*,i) reduction(+:sum)
  			for (int i=0;i<n;i++){
				sum=0;
 			 	#pragma xmp loop (j) on t(j,*)
    				for(int j=0;j<n;j++){
					sum+=A[i][j]*yy_0[j];
    					}
				y_1[i]=sum;
  			}


} // fin boucle k 

	// Etape 4: calcul C(2m-1)
sum=0;
#pragma xmp loop (i) on t(j,i) reduction(+:sum)
    			for(int i=0;i<n;i++){
				sum+=y_0[i]*y_1[i];
    					}
			c[2*m-1]=sum;
 
	//Affichage des résultats
#pragma xmp gmove
 yy_1[:]=y_1[:];
#pragma xmp task on p(1,1)
{
for (int i=0; i<n;i++) printf("yy: %f\n",yy_1[i]);
for (int i=0; i<2*m;i++) printf("c %f \n",c[i]);
//for (int i=0; i<n;i++){ printf("\n");
//for (int j=0;j<m;j++){printf(" %f\t",Vm[i][j]);
//}}
printf("\n");
}			
}// fin main
