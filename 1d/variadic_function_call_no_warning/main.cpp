
#define NBIN 600
#include <stdio.h>

int __attribute__((const)) vargs_function( int a, const double* v, ... )
{
  
}

int main(int argc, char** argv){
    
  int i = 0;
  double v_sigma[NBIN];
  int x[NBIN];

  for (i = 0; i < NBIN; ++i){
    vargs_function(1,&v_sigma[i]);
    x[i] = 10;
  }

  return 0;
}
