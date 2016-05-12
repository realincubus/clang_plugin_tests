#include <tbb/parallel_for.h>


void foo( int i = 0 )
{
  
}


int main(int argc, char** argv){
    
    int x[10];

    tbb::parallel_for (0,9 + 1,[&](int t1) {
        foo();
        x[t1] = 0;
} );


    return 0;
}
