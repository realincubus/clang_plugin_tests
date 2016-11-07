#include <vector>

using namespace std;

#define SIZE_X 1000
#define SIZE_Y 500

int main(int argc, char** argv){
    
    vector<vector<double>> a(SIZE_Y);
    vector<vector<double>> b(SIZE_Y);

    for( int i = 0 ; i < SIZE_Y ; i++ ) {
	a[i].resize(SIZE_X);
	b[i].resize(SIZE_X);
    }

    #pragma acc kernels 
for (auto t1=0;t1<=499;++t1) {
  for (auto t2=0;t2<=999;++t2) {
              b[t1][t2] = a[t1][t2];
  }
}


    return 0;
}
