
#define SIZE_X 1000
#define SIZE_Y 500

int main(int argc, char** argv){
    
    double a[SIZE_Y][SIZE_X];
    double b[SIZE_Y][SIZE_X];

    for (int y = 0; y < SIZE_Y; ++y){
      for (int x = 0; x < SIZE_X; ++x){
          b[y][x] = a[y][x];
      }
    }

    return 0;
}
