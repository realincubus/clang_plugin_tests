
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

  for (int my_i = 0; my_i < x.size(); ++my_i){
      x[my_i] = y[my_i]; 
  }

  return 0;
}
