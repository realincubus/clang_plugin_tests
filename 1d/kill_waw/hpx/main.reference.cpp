#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>


int main(int argc, char** argv){
    

    hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,99 + 1,[&](int t1) {
        double x;
        x = 0;
} );


    return 0;
}
