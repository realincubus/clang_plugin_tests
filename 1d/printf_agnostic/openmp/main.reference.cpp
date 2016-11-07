
#include <stdio.h>

int main ( int argc, char** argv ) {
  int x[1000];

  #pragma omp parallel for 
for (auto t1=0;t1<=999;++t1) {
      printf("%d", t1);
      x[t1] = t1;
}

}
