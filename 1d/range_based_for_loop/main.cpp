
#include <array>

int main(int argc, char** argv){
    
  std::array<double, 1000> a;

  for( auto&& e : a ){
    e = 10;
  }

  return 0;
}
