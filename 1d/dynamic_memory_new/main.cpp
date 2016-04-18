
#define SIZE 1000

int main(int argc, char** argv){
  double* x = new double[SIZE];
  double* y = new double[SIZE];
  

  for (int my_i = 0; my_i < SIZE; ++my_i){
      x[my_i] = y[my_i]; 
  }

  delete[] x;
  delete[] y;

  return 0;
}
