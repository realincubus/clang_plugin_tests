#include <tbb/parallel_for.h>

#define SIZE 1000

int main(int argc, char** argv){
  double* x = new double[SIZE];
  double* y = new double[SIZE];
  

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        x[t1] = y[t1]; 
} );


  delete[] x;
  delete[] y;

  return 0;
}
