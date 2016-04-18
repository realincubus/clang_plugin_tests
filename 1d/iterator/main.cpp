
#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  vector<double> x(SIZE);
  vector<double> y(SIZE);
  

  for (vector<double>::iterator i = x.begin() ; 
      i < x.end() ; 
      i++ ){
      // to make it more pet friedly 
      i[0] = 1.0;
  }

  return 0;
}
