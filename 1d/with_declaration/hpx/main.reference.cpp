#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>

#define SIZE 1000


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];

  hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,999 + 1,[&](int t1) {
      double a = 5;
      x[t1] = y[t1] * a; 
} );


  return 0;
}
