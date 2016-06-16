#include <tbb/parallel_for.h>



int main(int argc, char** argv){
  
    tbb::parallel_for (0,999 + 1,[&](int t1) {
        int x = 4711;
  tbb::parallel_for (0,499 + 1,[&](int t2) {
    	x = 9 + x ;
  } );
} );
  

    return 0;
}
