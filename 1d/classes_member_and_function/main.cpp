
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

  for( int i = 0 ; i < v1.size() ; i++ ) {
    v1[i].val = v2[i].get_information();
  } 

}
