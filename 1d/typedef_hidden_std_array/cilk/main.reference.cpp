#include <cilk/cilk.h>

#include <array>

#define SIZE 1000

using namespace std;

typedef array<double,SIZE> my_array;

int main(int argc, char** argv){
  my_array x;
  my_array y;
  

  cilk_for (auto t1=0;t1<=999;++t1) {
        x[t1] = y[t1]; 
}


  return 0;
}
