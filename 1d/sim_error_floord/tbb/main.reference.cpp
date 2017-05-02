#include <cmath>
#include <tbb/combinable.h>
#include <tbb/parallel_for.h>

int main(int argc, char** argv){
    
  int dp = 10;
  int other = 10;
  int x[10];

  if (dp >= 2){
  for (auto t1=0; t1<=std::floor( (double)(dp-2) /2);++t1) {
        int sum = 0;
    tbb::combinable< decltype( sum ) > sum_combine( sum );
        tbb::parallel_for (0,other-1 + 1,[&](int t3) {
            sum_combine.local() += t3*3;
    } );
        sum = sum_combine.combine( std::plus<>() );
                x[t1] = sum;
  } 
}
  return 0;
}
