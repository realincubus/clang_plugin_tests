


int main ( int argc, char** argv ) {
  int x[1000];
  int z[1000];

  for( int i = 0 ; i < 1000; i++ ) {
    if ( i < 1000 ) {
      int constant = 20;
      x[i] = constant;
    }
    if ( i < 1000 ) {
      int constant = 30;
      z[i] = constant;
    }
  }
}
