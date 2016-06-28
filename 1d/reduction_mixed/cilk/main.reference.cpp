#include <cilk/cilk.h>
#include <cilk/reducer_opadd.h>
#include <cilk/reducer_opmul.h>


int main(int argc, char** argv){
    
    int sum = 0;
    int prod = 0;

    cilk::reducer<cilk::op_mul< decltype( prod ) >> prod_reducer( prod );
    cilk::reducer<cilk::op_add< decltype( sum ) >> sum_reducer( sum );
    cilk_for (auto t1=0;t1<=9;++t1) {
        *sum_reducer += t1;
        *prod_reducer *= t1;
}
    prod = prod_reducer.get_value();
    sum = sum_reducer.get_value();
    

    return 0;
}
