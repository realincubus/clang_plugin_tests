
#include <vector>

using namespace std;

class A{
  public:
    int get_information() const{
      return 4711;
    }
    int val;
};

int main ( int argc, char** argv ) {
  

  vector<A> v1(10);
  vector<A> v2(10);

  if (v1.size() >= 1){
  #pragma acc kernels 
  for (auto t1=0;t1<=v1.size()-1;++t1) {
        v1[t1].val = v2[t1].get_information();
  }
} 

}
