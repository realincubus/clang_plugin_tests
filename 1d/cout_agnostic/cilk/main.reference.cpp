#include <cilk/cilk.h>

#include <iostream>

int main ( int argc, char** argv ){
  int x[1000];
  cilk_for (auto t1=0;t1<=999;++t1) {
      std::cout << "i " << t1 << std::endl;
      x[t1] = t1;
}

}
