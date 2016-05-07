#include <tbb/parallel_for.h>

#define NBIN 600
#include <stdio.h>

int __attribute__((const)) vargs_function( int a, ... )
{
  
}

int main(int argc, char** argv){
    
  int i = 0;
  double v_sigma[NBIN];
  int x[NBIN];

  tbb::parallel_for (0,599 + 1,[&](int t1) {
      vargs_function(1,&v_sigma[t1]);
      x[t1] = 10;
} );


  return 0;
}
