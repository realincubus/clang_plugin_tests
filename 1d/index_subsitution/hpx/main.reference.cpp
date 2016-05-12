#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>




int main(int argc, char** argv){

  int NR = 10;
  int NZ = 8;
  double Eps[NR*NZ];

  if ((NR >= 1) && (NZ >= 1)){
  hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,NR-2 + 1,[&](int t1) {
    	Eps[t1 * NZ + 0] = -100.;
  } );
  if (NZ >= 2){
    	Eps[(NR-1) * NZ + 0] = -100.;
    hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 1,NZ-1 + 1,[&](int t2) {
      	Eps[(NR-1) * NZ + t2] = -100.;
    } );
  }  if (NZ == 1){
    	Eps[(NR-1) * NZ + 0] = -100.;
  }}

  return 0;
}
