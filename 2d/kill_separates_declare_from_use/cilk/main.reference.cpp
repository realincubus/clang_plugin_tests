#include <cilk/cilk.h>



int main(int argc, char** argv){
  
    cilk_for (auto t1=0;t1<=999;++t1) {
        int x = 4711;
  cilk_for (auto t2=0;t2<=499;++t2) {
    	x = 9 + x ;
  }
}
  

    return 0;
}
