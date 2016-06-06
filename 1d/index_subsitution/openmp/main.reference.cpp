



int main(int argc, char** argv){

  int NR = 10;
  int NZ = 8;
  double Eps[NR*NZ];
  int i = 0;

  if ((NR >= 1) && (NZ >= 1)){
  #pragma omp parallel for 
  for (auto t1=0;t1<=NR-2;++t1) {
    	Eps[t1 * NZ +  0] = -100.;
  }
  if (NZ >= 2){
    	Eps[(NR-1) * NZ +  0] = -100.;
    auto lbv=1;
    auto ubv=NZ-1;
    #pragma ivdep
    #pragma vector always
    for (auto t2=lbv;t2<=ubv;++t2) {
      	Eps[(NR-1) * NZ +  t2] = -100.;
    }
  }  if (NZ == 1){
    	Eps[(NR-1) * NZ +  0] = -100.;
  }}

  return 0;
}
