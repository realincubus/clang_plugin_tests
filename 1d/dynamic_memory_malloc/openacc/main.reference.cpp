
#include <stdlib.h>

#define SIZE 1000

int main(int argc, char** argv){
  double* x = (double*)malloc( SIZE * sizeof(double) );
  double* y = (double*)malloc( SIZE * sizeof(double) );
  

  #pragma acc kernels 
for (auto t1=0;t1<=999;++t1) {
        x[t1] = y[t1]; 
}


  free( x );
  free( y );

  return 0;
}
