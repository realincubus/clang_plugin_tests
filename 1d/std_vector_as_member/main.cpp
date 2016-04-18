
#include <vector>

#define SIZE 1000

using namespace std;

struct Example {
  vector<double> x;
  vector<double> y;
};

int main(int argc, char** argv){
  
  Example ex;

  ex.x.resize(SIZE);
  ex.y.resize(SIZE);


  for (int my_i = 0; my_i < 1000; ++my_i){
      ex.x[my_i] = ex.y[my_i]; 
  }

  return 0;
}
