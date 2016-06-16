#include <tbb/parallel_for.h>



int main(int argc, char** argv){
  
    int y = 0;  

    tbb::parallel_for (0,99 + 1,[&](int t1) {
          int x = y;
  	x = 1 - x;
} );


    return 0;
}
