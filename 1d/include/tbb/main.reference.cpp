#include <tbb/parallel_for.h>

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
  

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        x[t1] = y[t1]; 
} );


  return 0;
}
