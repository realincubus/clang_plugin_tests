#include <tbb/parallel_for.h>




int main(int argc, char** argv){

  int NR = 10;
  int NZ = 8;
  double Eps[NR*NZ];
  int i = 0;

  if ((NR >= 1) && (NZ >= 1)){
  tbb::parallel_for (0,NR-2 + 1,[&](int t1) {
    	Eps[t1 * NZ +  0] = -100.;
  } );
  if (NZ >= 2){
    	Eps[(NR-1) * NZ +  0] = -100.;
    for (auto t2=1; t2<=NZ-1;++t2) {
      	Eps[(NR-1) * NZ +  t2] = -100.;
    } 
  }  if (NZ == 1){
    	Eps[(NR-1) * NZ +  0] = -100.;
  }}

  return 0;
}
