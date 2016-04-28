

#include <stdlib.h>

struct A {
  double x;
  double y;
  double z;
};



int main(int argc, char** argv){
    
  A a[1000];
  A b[1000];

  for (int i = 0; i < 1000; ++i){
    a[i].x = b[i].y ;
  }


  return 0;
}
