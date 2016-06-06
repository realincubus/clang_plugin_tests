
#include <tbb/parallel_for.h>

int main(int argc, char** argv){

  int x[100];
  
  for (int i = 0; i < 100; ++i){
    x[i] = 10;
  }  
  
  return 0;
}
