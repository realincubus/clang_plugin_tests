#include <tbb/parallel_for.h>

#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  vector<double> x(SIZE);
  vector<double> y(SIZE);
  

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        x[t1] = y[t1]; 
} );


  return 0;
}
