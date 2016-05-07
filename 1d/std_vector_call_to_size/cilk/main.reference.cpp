#include <cilk/cilk.h>

#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){

  vector<double> h(SIZE);
  double x[SIZE];
  double y[SIZE];
  

  if (h.size() >= 1){
  cilk_for (auto t1=0;t1<=h.size()-1;++t1) {
          x[t1] = y[t1]; 
  }
}

  return 0;
}
