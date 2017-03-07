#include <tbb/parallel_for.h>

#include <memory>

using namespace std;

#define SIZE 1000

int main(int argc, char** argv){
  typedef unique_ptr<double[]> dbl_array;
  dbl_array x (new double[SIZE]);
  dbl_array y (new double[SIZE]);
  

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        x[t1] = y[t1]; 
} );


  // automatically deletes x and y
  return 0;
}
