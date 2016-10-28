
#include <deque>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  deque<double> x;
  deque<double> y;
  
  for( int i = 0 ; i < 100; i++ ) {
  	x.push_back( i );
  	y.push_back( i );
  }

  if (x.size() >= 1){
  #pragma omp parallel for 
  for (auto t1=0;t1<=x.size()-1;++t1) {
          x[t1] = y[t1]; 
  }
}

  return 0;
}
