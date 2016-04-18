
#include <stdlib.h>

#define SIZE 1000

int main(int argc, char** argv){
  double* x = (double*)malloc( SIZE * sizeof(double) );
  double* y = (double*)malloc( SIZE * sizeof(double) );
  

  for (int my_i = 0; my_i < SIZE; ++my_i){
      x[my_i] = y[my_i]; 
  }

  free( x );
  free( y );

  return 0;
}
