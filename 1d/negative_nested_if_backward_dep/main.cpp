


int main( ) {

  int x[10];

  float d = 123123;
  float e = 123123;

  for( int i = 1; i < 10 ; i++ ) {

    if ( d > 10 ) {
      if ( e > 10 ) {
	x[i-1] = 0;
      }else{
	x[i] = 1;
      }
    }else{
      if ( e > 90 ) {
	x[i] = 2;
      }else{
	x[i] = 3;
      }
    }

  }

}
