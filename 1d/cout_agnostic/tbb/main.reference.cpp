#include <tbb/parallel_for.h>

#include <iostream>

int main ( int argc, char** argv ){
  int x[1000];
  tbb::parallel_for (0,999 + 1,[&](int t1) {
      std::cout << "i " << t1 << std::endl;
      x[t1] = t1;
} );

}
