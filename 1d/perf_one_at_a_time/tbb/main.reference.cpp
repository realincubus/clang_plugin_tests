#include <tbb/parallel_for.h>




int main(int argc, char** argv){
  
  int x[100];

  tbb::parallel_for (0,99 + 1,[&](int t1) {
      x[t1] = 123123;
} );


  for (int i = 0; i < 100; ++i){
    x[i] = 4711;
  }
    
  return 0;
}
