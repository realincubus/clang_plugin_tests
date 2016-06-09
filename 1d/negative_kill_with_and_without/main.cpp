
#define SIZE 1000


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  double b = 0;

  for (int my_i = 0; my_i < 1000; ++my_i){
    double a = 5;
    b = 7;
    if ( my_i < 500 ) {
      x[my_i] = a; 
    }else{
      x[my_i] = b;
    }
  }

  return 0;
}
