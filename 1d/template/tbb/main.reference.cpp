#include <tbb/parallel_for.h>


template < typename T >
void foo( T parameter ) {

  int x[parameter];

  if (parameter >= 1){
  tbb::parallel_for (0,parameter-1 + 1,[&](int t1) {
        x[t1] = t1;
  } );
}

}

int main( int argc, char** argv) {

  foo( 1000 );

}
