

#include <deque>

using namespace std;

int main(int argc, char** argv){

  deque<int> a;

  for( deque<int>::iterator i = a.begin(); i != a.end(); ++i ){
    *i = 10;
  }  

  return 0;
}
