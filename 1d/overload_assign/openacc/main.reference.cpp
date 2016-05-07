

#include <stdlib.h>

struct A {
  double x;
  double y;
  double z;
};



int main(int argc, char** argv){
    
  A a[1000];
  A b[1000];

  #pragma acc kernels 
for (auto t1=0;t1<=999;++t1) {
      a[t1] = b[t1] ;
}



  return 0;
}
