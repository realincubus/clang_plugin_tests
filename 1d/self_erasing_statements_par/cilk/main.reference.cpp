#include <cilk/cilk.h>



int main(int argc, char** argv){
    
    int x[10];

    cilk_for (auto t1=0;t1<=9;++t1) {
  	  x[t1] = 5;
}


    return 0;
}
