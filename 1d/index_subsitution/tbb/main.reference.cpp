#include <algorithm>
#include <tbb/parallel_for.h>




int main(int argc, char** argv){

  int NR = 10;
  int NZ = 8;
  double Eps[NR*NZ];
  int i = 0;

  if ((NR >= 1) && (NZ >= 1)){
  tbb::parallel_for (0,NR-1 + 1,[&](int t1) {
    for (auto t2=0; t2<=std::min(NZ-1,t1-NR+2147483647);++t2) {
      if ((t1 == NR-1) && (t2 >= 1)){
        	Eps[(NR-1) * NZ +  t2] = -100.;
      }      if (t2 == 0){
        	Eps[t1 * NZ +  0] = -100.;
      }    } 
  } );
}

  return 0;
}
