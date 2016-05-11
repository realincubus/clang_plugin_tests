
#include <vector>

using namespace std;

int main(int argc, char** argv){
  
    std::vector<int> v(10);  
    std::vector<int> other(10);  

    for (int i = 0; i < v.size(); ++i){
      v[i] = v.size();
      v.clear();
    }

    return 0;
}
