


int main( ) {

  int x[10];

  float d = 123123;
  float e = 123123;

  #pragma acc kernels 
for (auto t1=0;t1<=9;++t1) {
      if ( d > 10 ) {
      if ( e > 10 ) {
	x[t1] = 0;
      }else{
	x[t1] = 1;
      }
    }else{
      if ( e > 90 ) {
	x[t1] = 2;
      }else{
	x[t1] = 3;
      }
    }
}


}
