//AHMED CHABIB -M2 CHPS, UVSQ-MAISON DE LA SIMULATION
/* Ce programme est une implémentation XMP de l'étape de la projection de l'algorithme de PRR
 On suppose qu'on a une grille 1 D de processeurs, Il faut que la taille n soit divisible par 
le nombre de processeurs appelé  dans l'étape de l'éxécution. Les résultats sont vérifiés par 
Octave */



#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include<math.h>
int  n =6; int m=3; 
#pragma xmp nodes p(1,*)
#pragma xmp template t(0:n-1,0:n-1)
#pragma xmp distribute t(block,block) onto p

int main(int argc, char ** argv){
double sum=0; 
	// Matrice 
 double Vm[n][m];
#pragma xmp align Vm[i][j] with t(j,i)
	// vecteurs divisés sur les processeurs 
//double x[n];
//#pragma xmp align x[i] with t(*,i)

double vec[n][m]; 
#pragma xmp align vec[i][*] with t(*,i)
	// vecteurs connus par tous les processeurs 
//double yy_0[n];
//#pragma xmp align yy_0[j] with t(j,*)
double res[m+1][m];
#pragma xmp align res[*][j] with t(j,*)

	//INITIALIATION Vm
  #pragma xmp loop (i,j) on t(j,i)
  for (int i=0;i<n;i++){
    for(int j=0;j<m;j++){
	Vm[i][j]=1;
	if(i==j) Vm[i][j]=1;
	else if (j==i+1) Vm[i][j]=2;
	else if (j==i-1) Vm[i][j]=-2;
    	}
  }
	// Initialisation de res
#pragma xmp loop (j) on t(j,i)
    for(int j=0;j<m;j++){
  for (int i=0;i<=m;i++){
	res[i][j]=i+j;
}}

	
		// Calcul
#pragma xmp loop (i,j) on t(j,i) reduction(+:sum)
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
sum=0;
for(int k=0;k<m;k++){
				sum+=Vm[i][k]*res[k+1][j];
 vec[i][j]=sum;   					}
}}
	  //afffichage
#pragma xmp task on p(1,2)  
{
for(int i=0;i<n;i++){ 
printf("\n");
for (int j =0; j<m;j++){
printf("%f\t",vec[i][j]);
}

}
printf("\n");
} // end task 


}// fin main
