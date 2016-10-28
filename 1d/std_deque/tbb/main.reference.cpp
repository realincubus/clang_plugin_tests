#include <tbb/parallel_for.h>

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
  tbb::parallel_for<int>(0,x.size()-1 + 1,[&](int t1) {
          x[t1] = y[t1]; 
  } );
}

  return 0;
}
