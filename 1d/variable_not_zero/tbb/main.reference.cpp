#include <tbb/parallel_for.h>

int main(int argc, char** argv){
    
  int nr = 10;
  int v = 10;
  int x[10];
  int y[10];

  if (nr >= 1){
  if (v == 0){
    tbb::parallel_for (0,nr-1 + 1,[&](int t1) {
            y[t1] = 5;
    } );
  }  if (v >= 1){
    tbb::parallel_for (0,nr-1 + 1,[&](int t1) {
            x[t1] = 10;
    } );
  }  if (v <= -1){
    tbb::parallel_for (0,nr-1 + 1,[&](int t1) {
            x[t1] = 10;
    } );
  }}  


  return 0;
}
