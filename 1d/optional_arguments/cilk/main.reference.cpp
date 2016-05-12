#include <cilk/cilk.h>


void foo( int i = 0 )
{
  
}


int main(int argc, char** argv){
    
    int x[10];

    cilk_for (auto t1=0;t1<=9;++t1) {
        foo();
        x[t1] = 0;
}


    return 0;
}
