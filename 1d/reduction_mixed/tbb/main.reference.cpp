#include <tbb/combinable.h>
#include <tbb/parallel_for.h>


int main(int argc, char** argv){
    
    int sum = 0;
    int prod = 0;

    tbb::combinable< decltype( prod ) > prod_combine( prod );
    tbb::combinable< decltype( sum ) > sum_combine( sum );
    tbb::parallel_for (0,9 + 1,[&](int t1) {
        sum_combine.local() += t1;
        prod_combine.local() *= t1;
} );
    prod = prod_combine.combine( std::multiplies<>() );
    sum = sum_combine.combine( std::plus<>() );
    

    return 0;
}
