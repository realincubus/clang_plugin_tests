#include <cilk/cilk.h>

#include <memory>

using namespace std;

#define SIZE 1000

int main(int argc, char** argv){
  typedef unique_ptr<double[]> dbl_array;
  dbl_array x (new double[SIZE]);
  dbl_array y (new double[SIZE]);
  

  cilk_for (auto t1=0;t1<=999;++t1) {
        x[t1] = y[t1]; 
}


  // automatically deletes x and y
  return 0;
}
