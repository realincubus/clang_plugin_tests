#include <cilk/cilk.h>



int main(int argc, char** argv){
    
  double x[1000];
  double y[1000];

  int c = 10;
  //double c = 10;

  cilk_for (auto t1=0;t1<=999;++t1) {
      x[t1] = c ;
}


  return 0;
}
