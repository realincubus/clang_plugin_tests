
#include <memory>

using namespace std;

#define SIZE 1000

int main(int argc, char** argv){
  typedef unique_ptr<double[]> dbl_array;
  dbl_array x (new double[SIZE]);
  dbl_array y (new double[SIZE]);
  

  for (int my_i = 0; my_i < SIZE; ++my_i){
      x[my_i] = y[my_i]; 
  }

  // automatically deletes x and y
  return 0;
}
