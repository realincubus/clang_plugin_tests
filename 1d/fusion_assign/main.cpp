


int main ( int argc, char** argv ) {
  int x[1000];
  int z[1000];


  for( int i = 0 ; i < 1000; i++ ) {
    int var = -1;
    if ( i < 1000 ) {
      var = 20;
      x[i] = var;
    }
    if ( i < 1000 ) {
      var = 30;
      z[i] = var;
    }
  }
}
