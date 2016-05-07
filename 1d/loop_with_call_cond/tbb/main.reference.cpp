#include <tbb/parallel_for.h>

#define SIZE 1000

#include <cmath>

using namespace std;

int size(int i, int j){
  return SIZE;
}

int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  if (size(1,2) >= 1){
  tbb::parallel_for (0,size(1,2)-1 + 1,[&](int t1) {
          x[t1] = y[t1]; 
  } );
}

  return 0;
}
