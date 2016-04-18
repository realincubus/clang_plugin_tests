
#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){

  vector<double> h(SIZE);
  double x[SIZE];
  double y[SIZE];
  

  for (int my_i = 0; my_i < h.size(); ++my_i){
      x[my_i] = y[my_i]; 
  }

  return 0;
}
