
#include <string>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  string x = "HelloWorld";
  string y = "WorldHello";
 

  for (int my_i = 0; my_i < x.size(); ++my_i){
      x[my_i] = y[my_i]; 
  }

  return 0;
}
