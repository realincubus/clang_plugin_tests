
#define NBIN 600
#include <stdio.h>

void vargs_function( const char *fmt, ... )
{
  
}

int main(int argc, char** argv){
    
  int i = 0;
  double v_sigma[NBIN];

  for (i = 0; i < NBIN; ++i){
    vargs_function("%lf\n",&v_sigma[i]);
  }

  return 0;
}
