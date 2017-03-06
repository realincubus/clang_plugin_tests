

#define N 1000

int main(int argc, char** argv){

  double y[N];
  double x[N];
  double a = 42;

  #pragma acc kernels 
for (auto t1=0;t1<=999;++t1) {
      y[t1] = a + x[t1] + y[t1];
}

  return 0;
}
