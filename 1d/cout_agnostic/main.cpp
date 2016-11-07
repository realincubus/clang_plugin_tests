
#include <iostream>

int main ( int argc, char** argv ){
  int x[1000];
  for( int i = 0 ; i < 1000; i++ ) {
    std::cout << "i " << i << std::endl;
    x[i] = i;
  }
}
