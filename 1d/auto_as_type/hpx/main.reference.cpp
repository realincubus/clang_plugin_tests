#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>




int main(int argc, char** argv){
  
  decltype(10) a[10];  

  hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,9 + 1,[&](int t1) {
      a[t1] = 1;
} );

  return 0;
}
