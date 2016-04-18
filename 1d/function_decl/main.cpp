
#define SIZE 1000

#include <math.h>

int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  for (int my_i = 0; my_i < SIZE; ++my_i){
      x[my_i] = cos(my_i);
  }

  return 0;
}
