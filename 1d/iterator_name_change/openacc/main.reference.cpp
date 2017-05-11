
#include <vector>

#define SIZE 1000

using namespace std;

int main(int argc, char** argv){
  vector<double> new_name(SIZE);

  if (new_name.size() >= 1){
  #pragma acc kernels 
  for (auto t1=0;t1<=new_name.size()-1;++t1) {
    	new_name[t1] = 10;
  }
}

  return 0;
}
