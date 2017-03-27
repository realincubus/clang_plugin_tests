#include <vector>
#include <memory>

void foo() {
  constexpr size_t SIZE = 10000;

  std::vector<double> v(SIZE);
  std::unique_ptr<double[]> up ( new double[SIZE] );

  if (SIZE >= 1){
  #pragma acc kernels 
  for (auto t1=0;t1<=SIZE-1;++t1) {
        v[t1] = up[t1];
  }
}
}

int main(){
  foo();
}
