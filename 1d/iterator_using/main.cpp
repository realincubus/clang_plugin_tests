
#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  vector<double> x(SIZE);
  using my_iterator = vector<double>::iterator;

  for (my_iterator i = x.begin() ; 
      i != x.end() ; 
      i++ ){
	*i = 10;
  }

  return 0;
}
