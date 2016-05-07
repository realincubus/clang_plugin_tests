#include <cilk/cilk.h>


#include <vector>

using namespace std;


struct Particle {
    double x;
    double y;
    double z;
};

void foo( vector<Particle>& pa, vector<Particle>& other)
{
   if (other.size() >= 1){
  cilk_for (auto t1=0;t1<=other.size()-1;++t1) {
            pa[t1] = other[t1];
  }
}
}

int main(int argc, char** argv){
    vector<Particle> pa(10);
    vector<Particle> other(10);

    foo( pa, other );

    return 0;
}
