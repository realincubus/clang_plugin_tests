#include <tbb/combinable.h>
#include <tbb/parallel_for.h>



int main(int argc, char** argv){
    int prod = 0;

    tbb::combinable< decltype( prod ) > prod_combine( prod );
    tbb::parallel_for (0,9 + 1,[&](int t1) {
          prod_combine.local() *= t1;
} );
    prod = prod_combine.combine( std::multiplies<>() );
    

    return 0;
}
