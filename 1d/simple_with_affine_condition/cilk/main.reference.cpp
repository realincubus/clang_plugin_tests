#include <cilk/cilk.h>

#define SIZE 1000

#include <algorithm>

using namespace std;


int main(int argc, char** argv) {
  double x[SIZE];
  double y[SIZE];

  cilk_for (auto t1=0;t1<=999;++t1) {
        x[t1] = y[t1]; 
}


  return 0;
}
