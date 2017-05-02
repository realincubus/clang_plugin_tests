#include <cilk/cilk.h>
#include <cilk/reducer_opadd.h>
#include <cmath>

int main(int argc, char** argv){
    
  int dp = 10;
  int other = 10;
  int x[10];

  if (dp >= 2){
  for (auto t1=0;t1<=std::floor( (double)(dp-2) /2);++t1) {
        int sum = 0;
    cilk::reducer<cilk::op_add< decltype( sum ) >> sum_reducer( sum );
        cilk_for (auto t3=0;t3<=other-1;++t3) {
            *sum_reducer += t3*3;
    }
        sum = sum_reducer.get_value();
                x[t1] = sum;
  }
}
  return 0;
}
