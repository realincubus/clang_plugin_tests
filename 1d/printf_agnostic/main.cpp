
#include <stdio.h>

int main ( int argc, char** argv ) {
  int x[1000];

  for( int i = 0 ; i < 1000; i++ ) {
    printf("%d", i);
    x[i] = i;
  }
}
