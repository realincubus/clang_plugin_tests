#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>



int main(int argc, char** argv){
  
    int y = 0;  

    hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,99 + 1,[&](int t1) {
          int x = y;
  	x = 1 - x;
} );


    return 0;
}
