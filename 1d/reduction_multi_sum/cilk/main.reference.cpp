#include <cilk/cilk.h>
#include <cilk/reducer_opadd.h>


int main(int argc, char** argv){
    
  int sum_a = 0;
  int sum_b = 0;  

  int x[100];
  int y[100];

  cilk::reducer<cilk::op_add< decltype( sum_a ) >> sum_a_reducer( sum_a );
    cilk::reducer<cilk::op_add< decltype( sum_b ) >> sum_b_reducer( sum_b );
    cilk_for (auto t1=0;t1<=99;++t1) {
        *sum_a_reducer += x[t1];
        *sum_b_reducer += y[t1];
}
    sum_a = sum_a_reducer.get_value();
    sum_b = sum_b_reducer.get_value();
    

  return 0;
}
