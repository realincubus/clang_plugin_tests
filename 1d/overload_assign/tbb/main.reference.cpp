#include <tbb/parallel_for.h>


#include <stdlib.h>

struct A {
  double x;
  double y;
  double z;
};



int main(int argc, char** argv){
    
  A a[1000];
  A b[1000];

  tbb::parallel_for (0,999 + 1,[&](int t1) {
      a[t1] = b[t1] ;
} );



  return 0;
}
