
#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  vector<double> x(SIZE);
  vector<double> y(SIZE);
  
  vector<double>::iterator b = x.begin();
  vector<double>::iterator e = x.end();
  int w = 1;
  int z = 4;

  for (vector<double>::iterator i = std::begin(x) ; 
      i < e ; 
      i++ ){

      //*i = 10;
  }

  return 0;
}
