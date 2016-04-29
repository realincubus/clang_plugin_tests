

#include <vector>

using namespace std;


struct Particle {
    double x;
    double y;
    double z;
};

void foo( vector<Particle>& pa, vector<Particle>& other)
{
   for (int i = 0; i < other.size(); ++i){
        pa[i] = other[i];
    }
}

int main(int argc, char** argv){
    vector<Particle> pa(10);
    vector<Particle> other(10);

    foo( pa, other );

    return 0;
}
