#define _OM_PRAGMA_(...) _Pragma(#__VA_ARGS__)
#define _OM_PRAGMA(...) _OM_PRAGMA_(__VA_ARGS__)
# 1 "/home/ymlusr/local/var/yml/dr/binaries/init.c"
 





#include "yml_xmp_component_base.hh"
#include "Matrix.xmptype.h"
#include "vector.xmptype.h"


_OM_PRAGMA(xmp nodes _XMP_default_nodes(1,2))

_OM_PRAGMA(xmp template t(0:5,0:5))
_OM_PRAGMA(xmp distribute t(block,block) onto _XMP_default_nodes)

XMP_Matrix A[6][6];
_OM_PRAGMA(xmp align A[i][j] with t(j,i))

XMP_vector x[6];
_OM_PRAGMA(xmp align x[i] with t(*,i))

 







int main_init(int argc, char **argv)
{

  {
  }

{ 
  extern double gettimeofday_sec(), _xmp_etime_body;
  double _xmp_t0;
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_t0 = gettimeofday_sec();


int  n =6; 
double sum=0; 
	
_OM_PRAGMA(xmp loop (i,j) on t(j,i))
  for (int i=0;i<n;i++){
    for(int j=0;j<n;j++){
	A[i][j]=0;
	if(i==j) A[i][j]=1;
	else if (j==i+1) A[i][j]=2;
	else if (j==i-1) A[i][j]=-2;
    	}
  }

	
_OM_PRAGMA(xmp loop (i) on t(j,i))
  for (int i=0;i<n;i++){
	x[i]=0;
if(i==0) x[i]=1;
}

 
_OM_PRAGMA(xmp task on _XMP_default_nodes(1,1))
{
for(int i=0;i<n;i++) printf("%f\t",x[i]);

printf("\n");
} 
	 


  
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_etime_body = gettimeofday_sec()-_xmp_t0;
} 

  {
{
    extern XMP_Matrix * _XMP_ADDR_A;
    type_export((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_A),argv[1],Matrix_MPI_Type,Matrix_export,"6,6;1,2;1,1;[i][j]:(j,i)");
}
{
    extern XMP_vector * _XMP_ADDR_x;
    type_export((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_x),argv[2],vector_MPI_Type,vector_export,"6;1,2;1,1;[i]:(*,i)");
}
  }

  return EXIT_SUCCESS; 
} 

#line 1 "Footer section"

 
