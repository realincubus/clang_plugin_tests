#include <tbb/parallel_for.h>




struct A {
  int memeber_a;
  double member_b;
};


int main( int argc, char** argv ) {


  A a1[10];
  A a2[10];

  tbb::parallel_for (0,9 + 1,[&](int t1) {
      a1[t1] = a2[t1];
} );


}
