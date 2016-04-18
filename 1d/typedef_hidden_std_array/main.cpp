
#include <array>

#define SIZE 1000

using namespace std;

typedef array<double,SIZE> my_array;

int main(int argc, char** argv){
  my_array x;
  my_array y;
  

  for (int my_i = 0; my_i < 1000; ++my_i){
      x[my_i] = y[my_i]; 
  }

  return 0;
}
