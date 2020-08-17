#define _OM_PRAGMA_(...) _Pragma(#__VA_ARGS__)
#define _OM_PRAGMA(...) _OM_PRAGMA_(__VA_ARGS__)
# 1 "/home/ymlusr/local/var/yml/dr/binaries/sousEspace.c"
 





#include "yml_xmp_component_base.hh"
#include "vector.xmptype.h"
#include "Matrix.xmptype.h"


_OM_PRAGMA(xmp nodes _XMP_default_nodes(1,1))

_OM_PRAGMA(xmp template t(0:5,0:5))
_OM_PRAGMA(xmp distribute t(block,block) onto _XMP_default_nodes)

XMP_vector c[6];
_OM_PRAGMA(xmp align c[i] with t(*,i))

XMP_Matrix res[4][6];
_OM_PRAGMA(xmp align res[*][j] with t(j,*))

 



#include <lapacke.h>






int main_sousEspace(int argc, char **argv)
{

  {
  }

{ 
  extern double gettimeofday_sec(), _xmp_etime_body;
  double _xmp_t0;
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_t0 = gettimeofday_sec();


	
int  n =6; int m=3;
 double M[m][m]; 
 
double H[m][m];
  double delta1[m][m];
 double BmCm[m][m]; 

double *b=malloc(m*sizeof(double));
double *M_l=malloc(m*m*sizeof(double));
int *ind1=malloc(m*sizeof(int));


double *wr=malloc(m*sizeof(double));
 double *wi=malloc(m*sizeof(double));
double *vr=malloc(m*m*sizeof(double));
double *wr1=malloc(m*sizeof(double));
 double *wi1=malloc(m*sizeof(double));
double *vr1=malloc(m*m*sizeof(double));
double sum=0.0;
 double aide,max =0.0;
  int PMAX,p;		  



for(int i=0; i<2*m;i++){
c[i]=10*rand()/(double)RAND_MAX;
}
c[0]=1;
_OM_PRAGMA(xmp task on _XMP_default_nodes(1,1))
{printf("C:\n");
for (int i=0; i<2*m; i++){

printf(" %f \t", c[i]);
}
printf("\n");
}

	
for (int i=0; i<m;i++){
for (int j=0; j<m;j++){
M[i][j]=c[j+i];
}}
_OM_PRAGMA(xmp task on _XMP_default_nodes(1,1))
{printf("mat M:\n");
for (int i=0; i<m; i++){
printf("\n");
for (int j=0; j<m; j++){
printf(" %f \t", M[i][j]);
}}
printf("\n");
}
	
for (int i=0; i<m;i++){
b[i]=-c[i+m];
}
 



	
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
M_l[j*m+i]=M[i][j];
}}
 







	
int lda=m;  int info=0; int NRHS=1;

int *tab=calloc(m*m,sizeof(int));


	LAPACK_dgetrf(&m,&m,M_l,&lda,tab,&info);



	char trans='N'; int ldb=m;

	LAPACK_dgetrs(&trans,&m,&NRHS,M_l,&lda,tab,b,&ldb,&info);
	free(tab);
_OM_PRAGMA(xmp task on _XMP_default_nodes(1,1))
{printf("\nsolution:\n");
for (int i=0; i<m; i++) printf(" %f \t", b[i]);
printf("\n");
}

	
_OM_PRAGMA(xmp task on _XMP_default_nodes(1,1))
{
for (int i=0; i<m;i++){ 
for (int j=0; j<m;j++){ 
H[i][j]=0.0;
if(i==j+1) H[i][j]=1;
}}
for (int j=0; j<m;j++) H[0][j]=-b[m-j-1];


printf("mat H:\n");

for (int i=0; i<m;i++){ printf("\n");
for (int j=0; j<m;j++){
 printf(" %f \t", H[i][j]);}}
printf("\n");
	
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
M_l[j*m+i]=H[i][j];
}}
printf("\nmat H_l:\n");

for (int i=0; i<m*m;i++){ 
 printf(" %f \t", M_l[i]);}
} 
 	
_OM_PRAGMA(xmp task  on _XMP_default_nodes(1,1))
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
} 

	
_OM_PRAGMA(xmp task on _XMP_default_nodes(1,1))
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

	
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
M_l[j*m+i]=M[i][j];
}}
printf("\nmat Bm:\n");

for (int i=0; i<m*m;i++){ 
 printf(" %f \t", M_l[i]);}
	
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
	
for(int i=0;i<m;i++){
for(int j=0;j<m;j++){
M_l[j*m+i]=BmCm[i][j];
}}	
			
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
			


for (int i=0; i<m-1;i++){
    
    PMAX=i;
    for (int j=i+1;j<m;j++)
      if (fabs(wr[j])>fabs(wr[PMAX])) PMAX=j;
    
    aide=wr[i];
    wr[i]=wr[PMAX];
    wr[PMAX]=aide;
  }
	
for (int j=0; j<m; j++) res[0][j]= wr[j];
	
max =0.0;
for (int i=0; i<m;i++)  ind1[i]=i;
for (int i=0; i<m-1;i++){
    
    PMAX=i;
    for (int j=i+1;j<m;j++)
      if (fabs(wr1[j])>fabs(wr1[PMAX])) PMAX=j;
    
    aide=wr1[i];
    wr1[i]=wr1[PMAX];
    wr1[PMAX]=aide;
	p = ind1[i];
    ind1[i]=ind1[PMAX];
    ind1[PMAX]=p;
  }
		
for (int j=0;j<m;j++){
for (int i=1;i<m+1;i++){ 
res[i][j]=vr1[ind1[j]*m+i-1];
}}
} 

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


free(b); free(M_l); free(ind1);


  
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_etime_body = gettimeofday_sec()-_xmp_t0;
} 

  {
{
    extern XMP_vector * _XMP_ADDR_c;
    type_export((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_c),argv[1],vector_MPI_Type,vector_export,"6;1,1;1,1;[i]:(*,i)");
}
{
    extern XMP_Matrix * _XMP_ADDR_res;
    type_export((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_res),argv[2],Matrix_MPI_Type,Matrix_export,"4,6;1,1;1,1;[*][j]:(j,*)");
}
  }

  return EXIT_SUCCESS; 
} 

#line 1 "Footer section"

 
