
#define SIZE 1000

double max( double a , double b)
{
  return a > b ? a : b ;
}

int main(int argc, char** argv) {
  double x[SIZE];
  double y[SIZE];

  for (int my_i = 0; my_i < max(500,my_i); ++my_i){
      x[my_i] = y[my_i]; 
  }

  return 0;
}
