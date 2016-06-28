#include <tbb/combinable.h>
#include <tbb/parallel_for.h>

#include <iostream>

int main(int argc, char** argv){


    int x[10];
    int sum = 0;

    tbb::combinable< decltype( sum ) > sum_combine( sum );
    tbb::parallel_for (0,9 + 1,[&](int t1) {
        x[t1] = 0;
        sum_combine.local() +=  t1;
} );
    sum = sum_combine.combine( std::plus<>() );
    

    std::cout << "sum: " << sum  << std::endl;
    
    return 0;
}
