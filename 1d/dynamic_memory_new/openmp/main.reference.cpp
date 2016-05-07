
#define SIZE 1000

int main(int argc, char** argv){
  double* x = new double[SIZE];
  double* y = new double[SIZE];
  

  #pragma omp parallel for 
for (auto t1=0;t1<=999;++t1) {
        x[t1] = y[t1]; 
}


  delete[] x;
  delete[] y;

  return 0;
}
