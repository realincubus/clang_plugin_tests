#include <tbb/parallel_for.h>

#include <array>

#define SIZE 1000

using namespace std;

typedef array<double,SIZE> my_array;

int main(int argc, char** argv){
  my_array x;
  my_array y;
  

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        x[t1] = y[t1]; 
} );


  return 0;
}
