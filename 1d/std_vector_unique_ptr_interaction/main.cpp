#include <vector>
#include <memory>

void foo() {
  constexpr size_t SIZE = 10000;

  std::vector<double> v(SIZE);
  std::unique_ptr<double[]> up ( new double[SIZE] );

  for( int i = 0 ; i < SIZE; i++ ) {
    v[i] = up[i];
  }
}

int main(){
  foo();
}
