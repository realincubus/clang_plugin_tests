#include <algorithm>
#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>




int main(int argc, char** argv){

  int NR = 10;
  int NZ = 8;
  double Eps[NR*NZ];
  int i = 0;

  if ((NR >= 1) && (NZ >= 1)){
  hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,NR-1 + 1,[&](int t1) {
    hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,std::min(NZ-1,t1-NR+2147483647) + 1,[&](int t2) {
      if ((t1 == NR-1) && (t2 >= 1)){
        	Eps[(NR-1) * NZ +  t2] = -100.;
      }      if (t2 == 0){
        	Eps[t1 * NZ +  0] = -100.;
      }    } );
  } );
}

  return 0;
}
