

template < typename T >
void foo( T parameter ) {

  int x[parameter];

  if (parameter >= 1){
  #pragma acc kernels 
  for (auto t1=0;t1<=parameter-1;++t1) {
        x[t1] = t1;
  }
}

}

int main( int argc, char** argv) {

  foo( 1000 );

}
