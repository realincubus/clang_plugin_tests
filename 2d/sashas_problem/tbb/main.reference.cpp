#include <tbb/parallel_for.h>



int main(){

  int x[100][1000];

  tbb::parallel_for (0,999 + 1,[&](int t1) {
  for (auto t2=0; t2<=99;++t2) {
          x[t2][t1] = 1;
  } 
} );


}

