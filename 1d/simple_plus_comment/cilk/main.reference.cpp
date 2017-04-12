#include <cilk/cilk.h>

#define SIZE 1000


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  cilk_for (auto t1=0;t1<=999;++t1) {
        // comment before
      x[t1] = y[t1]; // comment right
      // comment after
}


  return 0;
}
