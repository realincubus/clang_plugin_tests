
#include <array>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  array<double,SIZE> x;
  array<double,SIZE> y;
  

  #pragma acc kernels 
for (auto t1=0;t1<=999;++t1) {
        x[t1] = y[t1]; 
}


  return 0;
}
