#include <tbb/parallel_for.h>

#include <stdlib.h>

#define SIZE 1000

int main(int argc, char** argv){
  double* x = (double*)malloc( SIZE * sizeof(double) );
  double* y = (double*)malloc( SIZE * sizeof(double) );
  

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        x[t1] = y[t1]; 
} );


  free( x );
  free( y );

  return 0;
}
