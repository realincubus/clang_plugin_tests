#include <cilk/cilk.h>

#include <vector>
#include <list>
#include <map>
#include <iterator>
#include <algorithm>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  cilk_for (auto t1=0;t1<=999;++t1) {
        x[t1] = y[t1]; 
}


  return 0;
}
