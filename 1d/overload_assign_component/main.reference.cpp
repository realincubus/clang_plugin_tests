

#include <stdlib.h>

struct A {
  double x;
  double y;
  double z;
};



int main(int argc, char** argv){
    
  A a[1000];
  A b[1000];

  #pragma omp parallel for 
for (auto t1=0;t1<=999;++t1) {
      a[t1].x = b[t1].y ;
}



  return 0;
}
