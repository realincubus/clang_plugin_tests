#include <cilk/cilk.h>


template < int size >
void foo( double val ) {

  double x[size];

  cilk_for (auto t1=0;t1<=999;++t1) {
      x[t1] = val;
}


}

int main( int argc, char** argv) {

  foo<1000>( 100.77 );

}
