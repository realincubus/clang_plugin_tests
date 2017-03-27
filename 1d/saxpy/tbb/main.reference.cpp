#include <tbb/parallel_for.h>


#define N 1000

int main(int argc, char** argv){

  double y[N];
  double x[N];
  double a = 42;

  tbb::parallel_for (0,999 + 1,[&](int t1) {
      y[t1] = a + x[t1] + y[t1];
} );

  return 0;
}
