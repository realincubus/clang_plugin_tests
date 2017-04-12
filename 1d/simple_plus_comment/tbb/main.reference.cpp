#include <tbb/parallel_for.h>

#define SIZE 1000


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        // comment before
      x[t1] = y[t1]; // comment right
      // comment after
} );


  return 0;
}
