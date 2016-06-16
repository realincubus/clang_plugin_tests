#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>



int main(){

  int x[100][1000];

  hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,999 + 1,[&](int t1) {
  hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,99 + 1,[&](int t2) {
          x[t2][t1] = 1;
  } );
} );


}

