#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>



int main(int argc, char** argv){
  
    hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,999 + 1,[&](int t1) {
        int x = 4711;
  hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,499 + 1,[&](int t2) {
    	x = 9 + x ;
  } );
} );
  

    return 0;
}
