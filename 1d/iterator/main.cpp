
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

  for (vector<double>::iterator i = b ; 
      i < e ; 
      i++ ){
      // to make it more pet friedly 
      //i[0] = 1.0;
  }

  return 0;
}
