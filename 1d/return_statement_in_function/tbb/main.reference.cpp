#include <tbb/parallel_for.h>


#include <vector>

using namespace std;

int foo() {
  return 0;
}





int main(int argc, char** argv){

  vector<int> v(100);
  const int max = v.size();

  if (max >= 1){
  tbb::parallel_for (0,max-1 + 1,[&](int t1) {
        v[t1] = foo();
  } );
}

  return 0;
}
