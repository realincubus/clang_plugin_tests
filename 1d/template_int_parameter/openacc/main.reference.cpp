

template < int size >
void foo( double val ) {

  double x[size];

  #pragma acc kernels 
for (auto t1=0;t1<=999;++t1) {
      x[t1] = val;
}


}

int main( int argc, char** argv) {

  foo<1000>( 100.77 );

}
