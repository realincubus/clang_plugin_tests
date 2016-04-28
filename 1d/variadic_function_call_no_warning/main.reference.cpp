
#define NBIN 600
#include <stdio.h>

int __attribute__((const)) vargs_function( int a, const double* v, ... )
{
  
}

int main(int argc, char** argv){
    
  int i = 0;
  double v_sigma[NBIN];
  int x[NBIN];

  #pragma omp parallel for 
for (auto t1=0;t1<=599;++t1) {
      vargs_function(1,&v_sigma[t1]);
      x[t1] = 10;
}


  return 0;
}
