#include <tbb/parallel_for.h>



int main(int argc, char** argv){
  bool x[100];

  tbb::parallel_for (0,99 + 1,[&](int t1) {
        x[t1] = true;
} );


  return 0;
}
