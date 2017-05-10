#include <cilk/cilk.h>





int main(int argc, char** argv){
    
  const int N = 1000;
  const int M = 0;
  int x[N];
  int y[N];

  if ((M >= 1) && (N >= 1)){
  cilk_for (auto t1=0;t1<=N-1;++t1) {
    for (auto t2=0;t2<=M-1;++t2) {
            x[t1] = y[t1];
    }
  }
}
    
  return 0;
}
