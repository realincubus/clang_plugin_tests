
#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  vector<double> x(SIZE);
  vector<double> y(SIZE);
  

  for (int my_i = 0; my_i < 1000; ++my_i){
      x[my_i] = y[my_i]; 
  }

  return 0;
}
