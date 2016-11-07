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

    for (int y = 0; y < SIZE_Y; ++y){
      for (int x = 0; x < SIZE_X; ++x){
          b[y][x] = a[y][x];
      }
    }

    return 0;
}
