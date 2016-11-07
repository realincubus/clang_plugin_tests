

template < typename T >
void foo( T parameter ) {

  int x[parameter];

  for( int i = 0 ; i < parameter ; i++ ) {
    x[i] = i;
  }

}

int main( int argc, char** argv) {

  foo( 1000 );

}
