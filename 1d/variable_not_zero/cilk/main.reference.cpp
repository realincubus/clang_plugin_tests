#include <cilk/cilk.h>

int main(int argc, char** argv){
    
  int nr = 10;
  int v = 10;
  int x[10];
  int y[10];

  if (nr >= 1){
  if (v == 0){
    cilk_for (auto t1=0;t1<=nr-1;++t1) {
            y[t1] = 5;
    }
  }  cilk_for (auto t1=0;t1<=nr-1;++t1) {
    if (v >= 1){
            x[t1] = 10;
    }    if (v <= -1){
            x[t1] = 10;
    }  }
}  


  return 0;
}
