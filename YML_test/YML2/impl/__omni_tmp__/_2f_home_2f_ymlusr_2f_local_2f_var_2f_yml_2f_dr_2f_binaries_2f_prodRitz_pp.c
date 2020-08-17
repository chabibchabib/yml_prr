#define _OM_PRAGMA_(...) _Pragma(#__VA_ARGS__)
#define _OM_PRAGMA(...) _OM_PRAGMA_(__VA_ARGS__)
# 1 "/home/ymlusr/local/var/yml/dr/binaries/prodRitz.c"
 





#include "yml_xmp_component_base.hh"
#include "Matrix.xmptype.h"
#include "Matrix.xmptype.h"
#include "Matrix.xmptype.h"


_OM_PRAGMA(xmp nodes _XMP_default_nodes(1,2))

_OM_PRAGMA(xmp template t(0:5,0:5))
_OM_PRAGMA(xmp distribute t(block,block) onto _XMP_default_nodes)

XMP_Matrix Vm[6][3];
_OM_PRAGMA(xmp align Vm[i][*] with t(*,i))

XMP_Matrix res[4][6];
_OM_PRAGMA(xmp align res[*][j] with t(j,*))

XMP_Matrix vec[6][3];
_OM_PRAGMA(xmp align vec[i][*] with t(*,i))

 







int main_prodRitz(int argc, char **argv)
{

  {
  }

{ 
  extern double gettimeofday_sec(), _xmp_etime_body;
  double _xmp_t0;
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_t0 = gettimeofday_sec();


int n,m;
 n=6; m=3;
double sum=0.0;

_OM_PRAGMA(xmp loop (i,j) on t(j,i))
  for (int i=0;i<n;i++){
    for(int j=0;j<m;j++){
	Vm[i][j]=1;
	if(i==j) Vm[i][j]=1;
	else if (j==i+1) Vm[i][j]=2;
	else if (j==i-1) Vm[i][j]=-2;
    	}
  }
	
_OM_PRAGMA(xmp loop (j) on t(j,i))
    for(int j=0;j<m;j++){
  for (int i=0;i<=m;i++){
	res[i][j]=i+j;
}}

	
		
_OM_PRAGMA(xmp loop (i,j) on t(j,i) reduction(+:sum))
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
sum=0;
for(int k=0;k<m;k++){
				sum+=Vm[i][k]*res[k+1][j];
 vec[i][j]=sum;   					}
}}
	  
_OM_PRAGMA(xmp task on _XMP_default_nodes(1,1)  )
{
for(int i=0;i<n;i++){ 
printf("\n");
for (int j =0; j<m;j++){
printf("%f\t",vec[i][j]);
}

}
printf("\n");
} 

 			  











  
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_etime_body = gettimeofday_sec()-_xmp_t0;
} 

  {
{
    extern XMP_Matrix * _XMP_ADDR_Vm;
    type_export((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_Vm),argv[1],Matrix_MPI_Type,Matrix_export,"6,3;1,2;1,1;[i][*]:(*,i)");
}
{
    extern XMP_Matrix * _XMP_ADDR_res;
    type_export((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_res),argv[2],Matrix_MPI_Type,Matrix_export,"4,6;1,2;1,1;[*][j]:(j,*)");
}
{
    extern XMP_Matrix * _XMP_ADDR_vec;
    type_export((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_vec),argv[3],Matrix_MPI_Type,Matrix_export,"6,3;1,2;1,1;[i][*]:(*,i)");
}
  }

  return EXIT_SUCCESS; 
} 

#line 1 "Footer section"

 
