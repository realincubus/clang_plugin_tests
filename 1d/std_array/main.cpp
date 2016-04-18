
#include <array>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  array<double,SIZE> x;
  array<double,SIZE> y;
  

  for (int my_i = 0; my_i < 1000; ++my_i){
      x[my_i] = y[my_i]; 
  }

  return 0;
}
