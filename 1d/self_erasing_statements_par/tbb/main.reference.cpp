#include <tbb/parallel_for.h>



int main(int argc, char** argv){
    
    int x[10];

    tbb::parallel_for (0,9 + 1,[&](int t1) {
  	  x[t1] = 5;
} );


    return 0;
}
