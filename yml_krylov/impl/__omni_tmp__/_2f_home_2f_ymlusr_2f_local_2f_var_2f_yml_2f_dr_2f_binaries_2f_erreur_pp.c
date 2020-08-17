#define _OM_PRAGMA_(...) _Pragma(#__VA_ARGS__)
#define _OM_PRAGMA(...) _OM_PRAGMA_(__VA_ARGS__)
# 1 "/home/ymlusr/local/var/yml/dr/binaries/erreur.c"
 





#include "yml_xmp_component_base.hh"
#include "Matrix.xmptype.h"
#include "Matrix.xmptype.h"
#include "Matrix.xmptype.h"
#include "real.xmptype.h"


_OM_PRAGMA(xmp nodes _XMP_default_nodes(1,2))

_OM_PRAGMA(xmp template t(0:5,0:5))
_OM_PRAGMA(xmp distribute t(block,block) onto _XMP_default_nodes)

XMP_Matrix A[6][6];
_OM_PRAGMA(xmp align A[i][j] with t(j,i))

XMP_Matrix vec[6][6];
_OM_PRAGMA(xmp align vec[i][j] with t(j,i))

XMP_Matrix res[4][6];
_OM_PRAGMA(xmp align res[*][j] with t(j,*))

typedef real err_type;
 


double Id[6][6];
_OM_PRAGMA(xmp align Id[i][j] with t(j,i))
double M[6][6];
_OM_PRAGMA(xmp align M[i][j] with t(j,i))
double tmp1[6];
_OM_PRAGMA(xmp align tmp1[i] with t(*,i))

double tmp2[6];
_OM_PRAGMA(xmp align tmp2[j] with t(j,*))
double erreur[6];
_OM_PRAGMA(xmp align erreur[j] with t(j,*))




int main_erreur(int argc, char **argv)
{
  err_type err;

  {
    extern XMP_Matrix *_XMP_ADDR_A;
    type_import((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_A),argv[1],Matrix_MPI_Type,Matrix_import,"6,6;1,2;1,1;[i][j]:(j,i)");
    extern XMP_Matrix *_XMP_ADDR_vec;
    type_import((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_vec),argv[2],Matrix_MPI_Type,Matrix_import,"6,6;1,2;1,1;[i][j]:(j,i)");
    extern XMP_Matrix *_XMP_ADDR_res;
    type_import((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_res),argv[3],Matrix_MPI_Type,Matrix_import,"4,6;1,2;1,1;[*][j]:(j,*)");
  }

{ 
  extern double gettimeofday_sec(), _xmp_etime_body;
  double _xmp_t0;
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_t0 = gettimeofday_sec();


int  n =6; int m=3; int r=1;
double sum=0; 
	
	
_OM_PRAGMA(xmp loop (i,j) on t(j,i))
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
	Id[i][j]=0;
	if(i==j) Id[i][j]=1;

    	}
  }	
	
		
for (int k=0; k<m;k++)
{
_OM_PRAGMA(xmp gmove)
tmp2[:]=vec[:][k];
_OM_PRAGMA(xmp loop (i,j) on t(j,i) )
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
M[i][j]=A[i][j]-res[0][k]*Id[i][j];
}}
_OM_PRAGMA(xmp loop (i,j) on t(j,i) reduction(+:sum))
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
sum=sum+M[i][j]*tmp2[j];

}
tmp1[i]=sum;
sum=0.0;
}
sum=0.0;
_OM_PRAGMA(xmp loop (i) on t(*,i) reduction(+:sum))
for (int i=0;i<n;i++){
sum=sum+tmp1[i]*tmp1[i];
}


erreur[k]=sqrt(sum);
sum=0.0;
}
 
_OM_PRAGMA(xmp task on _XMP_default_nodes(1,1))
{
for(int i=0;i<m;i++) printf("%f\t",erreur[i]);
printf("\n");
} 

double norme_A=0.0;
_OM_PRAGMA(xmp loop (i,j) on t(j,i) reduction(+:norme_A))
for (int i=0;i<n;i++){
for (int j=0;j<n;j++){
norme_A=norme_A+A[i][j]*A[i][j];
}}
norme_A=sqrt(norme_A);
for (int i=0;i<m;i++){
erreur[i]=erreur[i]/norme_A;
}
 
_OM_PRAGMA(xmp task on _XMP_default_nodes(1,1))
{
for(int i=0;i<m;i++) printf("%f\t",erreur[i]);
printf("\n norme: %f\n",norme_A);
printf("\n");
} 
int PMAX; double aide;
	 for (int i=0; i<m-1;i++){
    
    PMAX=i;
    for (int j=i+1;j<m;j++)
      if (fabs(erreur[j])>fabs(erreur[PMAX])) PMAX=j;
    
    aide=erreur[i];
    erreur[i]=erreur[PMAX];
    erreur[PMAX]=aide;
  }
 
_OM_PRAGMA(xmp task on  _XMP_default_nodes(1,1)  )
{
for(int i=0;i<m;i++) printf("%f\t",erreur[i]);

printf("\n");
}
aide=0;
for (int i=0; i<r;i++) aide+=erreur[i];
_OM_PRAGMA(xmp task on  _XMP_default_nodes(1,1)  )
{
printf("\n ERR: %f\n",aide);

}	 
err=aide;
if(err< pow(10,-5)) exit(-1);

  
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_etime_body = gettimeofday_sec()-_xmp_t0;
} 

  {
real_export(&err,argv[4]);
  }

  return EXIT_SUCCESS; 
} 

#line 1 "Footer section"

 
