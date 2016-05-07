#include <tbb/parallel_for.h>



int main(int argc, char** argv){
    
  double x[1000];
  double y[1000];

  int c = 10;
  //double c = 10;

  tbb::parallel_for (0,999 + 1,[&](int t1) {
      x[t1] = c ;
} );


  return 0;
}
