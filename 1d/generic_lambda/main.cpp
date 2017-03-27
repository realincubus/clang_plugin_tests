
#include <vector>
#include <iostream>
#include <algorithm>

int main(){
  
  std::vector<double> v1(100);

  std::fill(begin(v1), end(v1), 1 );

  auto sum = [](auto& v){
    double res = 0;
    for( int i = 0 ; i < v.size() ; i++ ) {
      res += v[i];
    }
    return res;
  };
  
  auto result = sum( v1 );  

  std::cout << "result : " << result << std::endl;

}
