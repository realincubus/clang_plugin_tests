
#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  vector<double> new_name(SIZE);

  for (vector<double>::iterator i = new_name.begin() ; 
      i != new_name.end() ; 
      i++ ){
	*i = 10;
  }

  return 0;
}
