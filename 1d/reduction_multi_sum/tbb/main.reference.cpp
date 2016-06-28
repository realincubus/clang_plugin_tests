#include <tbb/combinable.h>
#include <tbb/parallel_for.h>


int main(int argc, char** argv){
    
  int sum_a = 0;
  int sum_b = 0;  

  int x[100];
  int y[100];

  tbb::combinable< decltype( sum_a ) > sum_a_combine( sum_a );
    tbb::combinable< decltype( sum_b ) > sum_b_combine( sum_b );
    tbb::parallel_for (0,99 + 1,[&](int t1) {
        sum_a_combine.local() += x[t1];
        sum_b_combine.local() += y[t1];
} );
    sum_a = sum_a_combine.combine( std::plus<>() );
    sum_b = sum_b_combine.combine( std::plus<>() );
    

  return 0;
}
