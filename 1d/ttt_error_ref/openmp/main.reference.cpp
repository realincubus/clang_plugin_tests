
#include <vector>

using namespace std;

struct Value {
  double vx,vy,vz;
};


int main(){

  vector<Value> value_set(10);

  if (value_set.size() >= 1){
  #pragma omp parallel for 
  for (auto t1=0;t1<=value_set.size()-1;++t1) {
        Value& value = value_set[t1];
        float vxlast = value.vx;
        float vylast = value.vy;
        float vzlast = value.vz;
  }
}
}
