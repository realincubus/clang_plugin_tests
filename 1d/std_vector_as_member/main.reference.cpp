
#include <vector>

#define SIZE 1000

using namespace std;

struct Example {
  vector<double> x;
  vector<double> y;
};

int main(int argc, char** argv){
  
  Example ex;

  ex.x.resize(SIZE);
  ex.y.resize(SIZE);


  #pragma omp parallel for 
for (auto t1=0;t1<=999;++t1) {
        ex.x[t1] = ex.y[t1]; 
}


  return 0;
}
