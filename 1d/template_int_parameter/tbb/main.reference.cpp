#include <tbb/parallel_for.h>


template < int size >
void foo( double val ) {

  double x[size];

  if (size >= 1){
  tbb::parallel_for (0,size-1 + 1,[&](int t1) {
        x[t1] = val;
  } );
}

}

int main( int argc, char** argv) {

  foo<1000>( 100.77 );

}
