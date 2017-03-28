
#include <vector>

using namespace std;

struct Value {
  double vx,vy,vz;
};


int main(){

  vector<Value> value_set(10);

  for( int idx = 0 ; idx < value_set.size(); idx++ ) {
    Value& value = value_set[idx];

    float vxlast = value.vx;
    float vylast = value.vy;
    float vzlast = value.vz;

  }
}
