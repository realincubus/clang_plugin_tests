#include <tbb/parallel_for.h>

#define SIZE 1000


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];

  tbb::parallel_for (0,999 + 1,[&](int t1) {
      double a = 5;
      x[t1] = y[t1] * a; 
} );


  return 0;
}
