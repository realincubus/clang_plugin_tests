

template < int size >
void foo( double val ) {

  double x[size];

  for( int i = 0 ; i < size ; i++ ) {
    x[i] = val;
  }

}

int main( int argc, char** argv) {

  foo<1000>( 100.77 );

}
