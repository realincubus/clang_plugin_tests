
#include <string>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  string x = "HelloWorld";
  string y = "WorldHello";
 

  if (x.size() >= 1){
  #pragma acc kernels 
  for (auto t1=0;t1<=x.size()-1;++t1) {
          x[t1] = y[t1]; 
  }
}

  return 0;
}
