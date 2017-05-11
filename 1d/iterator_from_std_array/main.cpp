

#include <array>

using namespace std;

int main(int argc, char** argv){

  array<int,100> a;

  for( array<int,100>::iterator i = a.begin(); i != a.end(); ++i ){
    *i = 10;
  }  

  return 0;
}
