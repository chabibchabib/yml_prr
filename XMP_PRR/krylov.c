#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#include<math.h>
#include<lapacke.h>
int  n =6; int m=3; 
#pragma xmp nodes p(1,1)
#pragma xmp template t(0:n-1,0:n-1)
#pragma xmp distribute t(block,block) onto p

int main(int argc, char ** argv){
// Déclaration 
double c[2*m]; double M[m][m];   double M_l[m*m];double b[m];double H[m][m];  double delta1[m][m]; double BmCm[m][m]; double res[m+1][m];
int ind1[m];
double *wr=calloc(m,sizeof(double));
 double *wi=calloc(m,sizeof(double));
double *vr=calloc(m*m,sizeof(double));
double *wr1=calloc(m,sizeof(double));
 double *wi1=calloc(m,sizeof(double));
double *vr1=calloc(m*m,sizeof(double));
double sum=0.0;
 double aide,max =0.0;
  int PMAX,p;
// coef c 
for(int i=0; i<2*m;i++){
c[i]=10*rand()/(double)RAND_MAX;
}
c[0]=1;
#pragma xmp task on p(1,1)
{printf("C:\n");
for (int i=0; i<2*m; i++){

printf(" %f \t", c[i]);
}
printf("\n");
}
//Etape 5: Résolution du système de Yule-Walker
	// Construction de la matrice du système
for (int i=0; i<m;i++){
for (int j=0; j<m;j++){
M[i][j]=c[j+i];
}}
#pragma xmp task on p(1,1)
{printf("mat M:\n");
for (int i=0; i<m; i++){
printf("\n");
for (int j=0; j<m; j++){
printf(" %f \t", M[i][j]);
}}
printf("\n");
}
	//Construction du vecteur second membre  du système
for (int i=0; i<m;i++){
b[i]=-c[i+m];
}
/*#pragma xmp task on p(1,1)
{printf("\nvecteur sec:\n");
for (int i=0; i<m; i++) printf(" %f \t", b[i]);
}*/
	// Linearisation de la matrice M du système 
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
M_l[j*m+i]=M[i][j];
}}
/*#pragma xmp task on p(1,1)
{printf("\nmat l:\n");
for (int i=0; i<m*m; i++){

printf(" %f \t", M_l[i]);
}
printf("\n");
}*/
	// Résolution du système 
int lda=m;  int info=0; int NRHS=1;

int *tab=calloc(m*m,sizeof(int));

	LAPACK_dgetrf(&m,&m,M_l,&lda,tab,&info);

	char trans='N'; int ldb=m;

	LAPACK_dgetrs(&trans,&m,&NRHS,M_l,&lda,tab,b,&ldb,&info);
	free(tab);
 #pragma xmp task on p(1,1)
{printf("\nsolution:\n");
for (int i=0; i<m; i++) printf(" %f \t", b[i]);
printf("\n");
}
//Etape 6: calcul des racines du polynome Qm(lambda)
	// Calcul de la matrice companion
#pragma xmp task on p(1,1)
{
for (int i=0; i<m;i++){ 
for (int j=0; j<m;j++){ 
H[i][j]=0.0;
if(i==j+1) H[i][j]=1;
}}
for (int j=0; j<m;j++) H[0][j]=-b[m-j-1];
//#pragma xmp task on p(1,1)
//{
printf("mat H:\n");

for (int i=0; i<m;i++){ printf("\n");
for (int j=0; j<m;j++){
 printf(" %f \t", H[i][j]);}}
printf("\n");
	// Linearisation de la matrice H du système 
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
M_l[j*m+i]=H[i][j];
}}
printf("\nmat H_l:\n");

for (int i=0; i<m*m;i++){ 
 printf(" %f \t", M_l[i]);}
} // end task 
 	// Valeur propres 
#pragma xmp task  on p(1,1)
{
char balanc= 'B';
	char jobvl = 'N';
	char jobvr = 'V'; 
	char sense = 'V';
	int ldvl = m;
	int ldb;
	ldb=m;
	double* vl = calloc(ldvl*m,sizeof(double));
	int ldvr = m; 
	int ilo=0, ihi=0;
	double* scale = calloc(m,sizeof(double));
	double abnrm=0.;
	double* rconde = calloc(m,sizeof(double));
	double* rcondv = calloc(m,sizeof(double));
	int *iwork = calloc(2*m-2,sizeof(int));
	double wkopt=0.;
	int lwork = -1;
	int info; 	LAPACK_dgeevx(&balanc,&jobvl,&jobvr,&sense,&m,M_l,&ldb,wr,wi,vl,&ldvl,vr,&ldvr,&ilo,&ihi,scale,&abnrm,rconde,rcondv,&wkopt,&lwork,iwork,&info);
	lwork = (int)wkopt;
	double* work = calloc(lwork,sizeof(double));	LAPACK_dgeevx(&balanc,&jobvl,&jobvr,&sense,&m,M_l,&ldb,wr,wi,vl,&ldvl,vr,&ldvr,&ilo,&ihi,scale,&abnrm,rconde,rcondv,work,&lwork,iwork,&info);
	if( info > 0 ) {
		printf( "Erreur: Valeurs et vecteurs propres non calculés.\n" );
		exit( 1 );
	}
	free(vl);free(scale);free(rconde);free(rcondv);free(iwork);free(work);
} // end task vec
// Etape 7: calcul des vecteurs de Ritz 
	// Calcul matrice CM
#pragma xmp task on p(1,1)
{
for (int i=0; i<m;i++){
for (int j=0; j<m;j++){
delta1[i][j]=c[j+i+1];
}}
printf("mat delta:\n");
for (int i=0; i<m; i++){
printf("\n");
for (int j=0; j<m; j++){
printf(" %f \t", delta1[i][j]);
}}
printf("\n");

	// linéariser la matrice BM 
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
M_l[j*m+i]=M[i][j];
}}
printf("\nmat Bm:\n");

for (int i=0; i<m*m;i++){ 
 printf(" %f \t", M_l[i]);}
	// inverser la matrice BM
int lda1;
lda1=m;
 int lwork1=m; int info1;
double *work1=malloc(m*sizeof(double));
int *ipiv1=malloc(m*sizeof(int));
   LAPACK_dgetrf(&m,&m,M_l,&lda1,ipiv1,&info1);

LAPACK_dgetri(&m,  M_l,&lda1,ipiv1,work1,&lwork1,&info1); 

free(work1); free(ipiv1);
printf("\nmat M_l inv:\n");

for (int i=0; i<m*m;i++){ 
 printf(" %f \t", M_l[i]);}
	// fact de la matrice 
for(int j=0;j<m;j++){
		for(int k=0;k<m;k++){
			M[k][j]=M_l[j*m+k];}}


printf("mat delta:\n");
for (int i=0; i<m; i++){
printf("\n");
for (int j=0; j<m; j++){
printf(" %f \t", delta1[i][j]);
}}
printf("\n");
	//BmCm=Bm^-1*Cm;
for (int i=0; i<m;i++){
for(int j=0;j<m;j++){
BmCm[i][j]=0;
for(int k=0;k<m;k++){
BmCm[i][j]=BmCm[i][j]+M[i][k]*delta1[k][j];
}}}

printf("mat BMCM:\n");
for (int i=0; i<m; i++){
printf("\n");
for (int j=0; j<m; j++){
printf(" %f \t", BmCm[i][j]);
}}
printf("\n");
	// calcul des vecteurs de Ritz: d'abord les valeurs propres 
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
M_l[j*m+i]=BmCm[i][j];
}}	
			/// val et vec propres de ritz 
char balanc= 'B';
	char jobvl = 'N';
	char jobvr = 'V'; 
	char sense = 'V';
	int ldvl = m;
	int ldb;
	ldb=m;
	double* vl = calloc(ldvl*m,sizeof(double));
	int ldvr = m; 
	int ilo=0, ihi=0;
	double* scale = calloc(m,sizeof(double));
	double abnrm=0.;
	double* rconde = calloc(m,sizeof(double));
	double* rcondv = calloc(m,sizeof(double));
	int *iwork = calloc(2*m-2,sizeof(int));
	double wkopt=0.;
	int lwork = -1;
	int info; 	LAPACK_dgeevx(&balanc,&jobvl,&jobvr,&sense,&m,M_l,&ldb,wr1,wi1,vl,&ldvl,vr1,&ldvr,&ilo,&ihi,scale,&abnrm,rconde,rcondv,&wkopt,&lwork,iwork,&info);
	lwork = (int)wkopt;
	double* work = calloc(lwork,sizeof(double));	LAPACK_dgeevx(&balanc,&jobvl,&jobvr,&sense,&m,M_l,&ldb,wr1,wi1,vl,&ldvl,vr1,&ldvr,&ilo,&ihi,scale,&abnrm,rconde,rcondv,work,&lwork,iwork,&info);
	if( info > 0 ) {
		printf( "Erreur: Valeurs et vecteurs propres non calculés.\n" );
		exit( 1 );
	}
	free(vl);free(scale);free(rconde);free(rcondv);free(iwork);free(work);
			// tri des racines polynomes 

//for( int i=0;i<m;i++) ind1[i]=i;
for (int i=0; i<m-1;i++){
    // Recherche du max à droite de module[i]
    PMAX=i;
    for (int j=i+1;j<m;j++)
      if (fabs(wr[j])>fabs(wr[PMAX])) PMAX=j;
    // Echange de module[i] avec le max
    aide=wr[i];
    wr[i]=wr[PMAX];
    wr[PMAX]=aide;
  }
	// remplir la 1 ere ligne du tableau res qui va contenir les racines des polynomes (valeurs propres triées)
for (int j=0; j<m; j++) res[0][j]= wr[j];
	// tri des val de Ritz 
max =0.0;
for (int i=0; i<m;i++)  ind1[i]=i;
for (int i=0; i<m-1;i++){
    // Recherche du max à droite de module[i]
    PMAX=i;
    for (int j=i+1;j<m;j++)
      if (fabs(wr1[j])>fabs(wr1[PMAX])) PMAX=j;
    // Echange de module[i] avec le max
    aide=wr1[i];
    wr1[i]=wr1[PMAX];
    wr1[PMAX]=aide;
	p = ind1[i];
    ind1[i]=ind1[PMAX];
    ind1[PMAX]=p;
  }
		// remplir les colonnes de res avec les vecteurs de Ritz  qui correspondent aux valeurs triées
for (int j=0;j<m;j++){
for (int i=1;i<m+1;i++){ 
res[i][j]=vr1[ind1[j]*m+i-1];
}}
} // end task
// FREE 
printf("\nind \n");
for (int i=0; i<m;i++){ 
 printf(" %d \t", ind1[i]);
}
printf("\n wr1 \n");
for (int i=0; i<m;i++){ 
 printf(" %f \t", wr1[i]);
}
printf("\n res \n");
for (int i=0; i<m+1;i++){
printf("\n");
for (int j=0; j<m;j++){  
 printf(" %f \t", res[i][j]);
}}

free(wr); free(wi); free(vr);
free(wr1); free(wi1); free(vr1);

}// fin main

