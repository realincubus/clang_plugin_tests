

#include <vector>

using namespace std;

int foo() {
  return 0;
}





int main(int argc, char** argv){

  vector<int> v(100);
  const int max = v.size();

  for (int i = 0; i < max; ++i){
    v[i] = foo();
  }

  return 0;
}
