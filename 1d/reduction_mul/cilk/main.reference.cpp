#include <cilk/cilk.h>
#include <cilk/reducer_opmul.h>



int main(int argc, char** argv){
    int prod = 0;

    cilk::reducer<cilk::op_mul< decltype( prod ) >> prod_reducer( prod );
    cilk_for (auto t1=0;t1<=9;++t1) {
          *prod_reducer *= t1;
}
    prod = prod_reducer.get_value();
    

    return 0;
}
