#include <tbb/parallel_for.h>

#include <stdio.h>

int main ( int argc, char** argv ) {
  int x[1000];

  tbb::parallel_for (0,999 + 1,[&](int t1) {
      printf("%d", t1);
      x[t1] = t1;
} );

}
