#include <cilk/cilk.h>



int main(int argc, char** argv){
  bool x[100];

  cilk_for (auto t1=0;t1<=99;++t1) {
        x[t1] = true;
}


  return 0;
}
