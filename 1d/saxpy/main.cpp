

#define N 1000

int main(int argc, char** argv){

  double y[N];
  double x[N];
  double a = 42;

  for (int i = 0; i < N; ++i){
    y[i] = a + x[i] + y[i];
  }
  return 0;
}
