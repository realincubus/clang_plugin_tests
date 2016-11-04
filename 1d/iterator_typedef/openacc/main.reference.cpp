
#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  vector<double> x(SIZE);
  typedef vector<double>::iterator my_iterator;

  if (x.size() >= 1){
  #pragma acc kernels 
  for (auto t1=0;t1<=x.size()-1;++t1) {
    	x[t1] = 10;
  }
}

  return 0;
}
