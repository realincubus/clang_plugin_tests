#include <tbb/parallel_for.h>

#define SIZE 1000

#include <math.h>

int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        x[t1] = cos(t1);
} );


  return 0;
}
