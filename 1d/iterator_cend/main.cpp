
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char** argv){
 
  typedef vector<int> myarray;
  myarray arr(100);  

  for( myarray::const_iterator i = arr.cbegin(); i != arr.cend(); i++ ){
    cout << *i << endl;
  }

  return 0;
}
