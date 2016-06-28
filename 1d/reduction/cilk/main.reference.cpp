#include <cilk/cilk.h>
#include <cilk/reducer_opadd.h>

#include <iostream>

int main(int argc, char** argv){


    int x[10];
    int sum = 0;

    cilk::reducer<cilk::op_add< decltype( sum ) >> sum_reducer( sum );
    cilk_for (auto t1=0;t1<=9;++t1) {
        x[t1] = 0;
        *sum_reducer +=  t1;
}
    sum = sum_reducer.get_value();
    

    std::cout << "sum: " << sum  << std::endl;
    
    return 0;
}
