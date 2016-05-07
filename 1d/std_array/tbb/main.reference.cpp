#include <tbb/parallel_for.h>

#include <array>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  array<double,SIZE> x;
  array<double,SIZE> y;
  

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        x[t1] = y[t1]; 
} );


  return 0;
}
