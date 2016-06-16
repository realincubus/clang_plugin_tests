#include <tbb/parallel_for.h>



int main(){

  int x[100][1000];

  tbb::parallel_for (0,999 + 1,[&](int t1) {
  tbb::parallel_for (0,99 + 1,[&](int t2) {
          x[t2][t1] = 1;
  } );
} );


}

