#include <tbb/parallel_for.h>




int main(int argc, char** argv){
  
  decltype(10) a[10];  

  tbb::parallel_for (0,9 + 1,[&](int t1) {
      a[t1] = 1;
} );

  return 0;
}
