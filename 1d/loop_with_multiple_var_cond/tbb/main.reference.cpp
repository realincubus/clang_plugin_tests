#include <tbb/parallel_for.h>





int main(int argc, char** argv){
    
  const int N = 1000;
  const int M = 0;
  int x[N];
  int y[N];

  if ((M >= 1) && (N >= 1)){
  tbb::parallel_for (0,N-1 + 1,[&](int t1) {
    tbb::parallel_for (0,M-1 + 1,[&](int t2) {
            x[t1] = y[t1];
    } );
  } );
}
    
  return 0;
}
