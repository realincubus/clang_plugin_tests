
#define SIZE 1000

#include <algorithm>

using namespace std;


int main(int argc, char** argv) {
  double x[SIZE];
  double y[SIZE];

  for (int my_i = 0; my_i < std::max(500,1000); ++my_i){
      x[my_i] = y[my_i]; 
  }

  return 0;
}
