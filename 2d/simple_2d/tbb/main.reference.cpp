#include <tbb/parallel_for.h>

#define SIZE_X 1000
#define SIZE_Y 500

int main(int argc, char** argv){
    
    double a[SIZE_Y][SIZE_X];
    double b[SIZE_Y][SIZE_X];

    tbb::parallel_for (0,499 + 1,[&](int t1) {
  tbb::parallel_for (0,999 + 1,[&](int t2) {
              b[t1][t2] = a[t1][t2];
  } );
} );


    return 0;
}
