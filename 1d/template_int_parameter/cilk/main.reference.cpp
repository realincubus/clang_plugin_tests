#include <cilk/cilk.h>


template < int size >
void foo( double val ) {

  double x[size];

  if (size >= 1){
  cilk_for (auto t1=0;t1<=size-1;++t1) {
        x[t1] = val;
  }
}

}

int main( int argc, char** argv) {

  foo<1000>( 100.77 );

}
