#define _OM_PRAGMA_(...) _Pragma(#__VA_ARGS__)
#define _OM_PRAGMA(...) _OM_PRAGMA_(__VA_ARGS__)
# 1 "/home/ymlusr/local/var/yml/dr/binaries/krylov.c"
 





#include "yml_xmp_component_base.hh"
#include "Matrix.xmptype.h"
#include "vector.xmptype.h"
#include "vector.xmptype.h"
#include "Matrix.xmptype.h"


_OM_PRAGMA(xmp nodes _XMP_default_nodes(1,2))

_OM_PRAGMA(xmp template t(0:5,0:5))
_OM_PRAGMA(xmp distribute t(block,block) onto _XMP_default_nodes)

XMP_Matrix A[6][6];
_OM_PRAGMA(xmp align A[i][j] with t(j,i))

XMP_vector x[6];
_OM_PRAGMA(xmp align x[i] with t(*,i))

XMP_vector c[6];
_OM_PRAGMA(xmp align c[j] with t(j,*))

XMP_Matrix Vm[6][6];
_OM_PRAGMA(xmp align Vm[i][j] with t(j,i))

 


double y_0[6];
_OM_PRAGMA(xmp align y_0[i] with t(*,i))
double y_1[6];
_OM_PRAGMA(xmp align y_1[i] with t(*,i))
	
double yy_0[6];
_OM_PRAGMA(xmp align yy_0[j] with t(j,*))
double yy_1[6];                      
_OM_PRAGMA(xmp align yy_1[j] with t(j,*))




int main_krylov(int argc, char **argv)
{

  {
    extern XMP_Matrix *_XMP_ADDR_A;
    type_import((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_A),argv[1],Matrix_MPI_Type,Matrix_import,"6,6;1,2;1,1;[i][j]:(j,i)");
    extern XMP_vector *_XMP_ADDR_x;
    type_import((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_x),argv[2],vector_MPI_Type,vector_import,"6;1,2;1,1;[i]:(*,i)");
  }

{ 
  extern double gettimeofday_sec(), _xmp_etime_body;
  double _xmp_t0;
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_t0 = gettimeofday_sec();


int n,m;
 n=6; m=3;
double sum=0; 

	
c[0]=1;
_OM_PRAGMA(xmp loop (i) on t(j,i) reduction(+:sum))
    			for(int i=0;i<n;i++){
				sum+=x[i]*x[i];
    					}
sum=sqrt(sum);
  			
_OM_PRAGMA(xmp loop (i) on t(*,i))
    for(int i=0;i<n;i++){
			y_0[i]=x[i]/sum;
    				}

_OM_PRAGMA(xmp loop (i) on t(*,i))
    for(int i=0;i<n;i++){
			Vm[i][0]=y_0[i];
    				}


	
_OM_PRAGMA(xmp gmove)
 yy_0[:]=y_0[:];
_OM_PRAGMA(xmp loop (i) on t(*,i) reduction(+:sum))
  for (int i=0;i<n;i++){
			sum=0;
_OM_PRAGMA(xmp loop (j) on t(j,*))
    			for(int j=0;j<n;j++){
				sum+=A[i][j]*yy_0[j];
    					}
			y_1[i]=sum;
  			}


	
for (int k=1; k<m;k++){
			
			sum=0;

_OM_PRAGMA(xmp loop (i) on t(j,i) reduction(+:sum))
    			for(int i=0;i<n;i++){
				sum+=y_0[i]*y_1[i];
    					}
			c[2*k-1]=sum;
			
			sum=0;

_OM_PRAGMA(xmp loop (i) on t(j,i) reduction(+:sum))
    			for(int i=0;i<n;i++){
				sum+=y_1[i]*y_1[i];
    					}
			c[2*k]=sum;

			
_OM_PRAGMA(xmp loop (i) on t(j,i) )
			for(int i=0;i<n;i++){
				y_0[i]=y_1[i];
    					}
			
_OM_PRAGMA(xmp gmove)
			yy_0[:]=y_1[:];
			  
_OM_PRAGMA(xmp loop (i) on t(j,i))
    			for(int i=0;i<n;i++){
			Vm[i][k]=y_1[i];
    				}
_OM_PRAGMA(xmp loop (i) on t(*,i) reduction(+:sum))
  			for (int i=0;i<n;i++){
				sum=0;
_OM_PRAGMA(xmp loop (j) on t(j,*))
    				for(int j=0;j<n;j++){
					sum+=A[i][j]*yy_0[j];
    					}
				y_1[i]=sum;
  			}


} 

	
sum=0;
_OM_PRAGMA(xmp loop (i) on t(j,i) reduction(+:sum))
    			for(int i=0;i<n;i++){
				sum+=y_0[i]*y_1[i];
    					}
			c[2*m-1]=sum;
 
	
_OM_PRAGMA(xmp gmove)
 yy_1[:]=y_1[:];

_OM_PRAGMA(xmp task on  _XMP_default_nodes(1,1))
{
for (int i=0; i<n;i++) printf("yy: %f\n",yy_1[i]);
for (int i=0; i<2*m;i++) printf("c %f \n",c[i]);



printf("\n");
} 



  
  MPI_Barrier(MPI_COMM_WORLD);
  _xmp_etime_body = gettimeofday_sec()-_xmp_t0;
} 

  {
{
    extern XMP_vector * _XMP_ADDR_c;
    type_export((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_c),argv[3],vector_MPI_Type,vector_export,"6;1,2;1,1;[j]:(j,*)");
}
{
    extern XMP_Matrix * _XMP_ADDR_Vm;
    type_export((void *)_XMP_M_GET_ADDR_0(_XMP_ADDR_Vm),argv[4],Matrix_MPI_Type,Matrix_export,"6,6;1,2;1,1;[i][j]:(j,i)");
}
  }

  return EXIT_SUCCESS; 
} 

#line 1 "Footer section"

 
