#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>
// in theory this could be understood as a reduction to each member of the x array
// but no framework supports this so pet must not handle it this way

int main(int argc, char** argv){
    
    int x[100];

    hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,99 + 1,[&](int t1) {
        x[t1] += t1;
} );


    return 0;
}
