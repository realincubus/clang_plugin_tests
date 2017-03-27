
#include <memory>

using namespace std;

#define SIZE 1000

int main(int argc, char** argv){
  unique_ptr<double[]> x (new double[SIZE]);
  unique_ptr<double[]> y (new double[SIZE]);
  

  #pragma omp parallel for 
for (auto t1=0;t1<=999;++t1) {
        x[t1] = y[t1]; 
}


  // automatically deletes x and y
  return 0;
}
