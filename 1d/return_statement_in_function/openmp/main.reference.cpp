

#include <vector>

using namespace std;

int foo() {
  return 0;
}





int main(int argc, char** argv){

  vector<int> v(100);
  const int max = v.size();

  if (max >= 1){
  #pragma omp parallel for 
  for (auto t1=0;t1<=max-1;++t1) {
        v[t1] = foo();
  }
}

  return 0;
}
