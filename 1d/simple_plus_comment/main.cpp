
#define SIZE 1000


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  for (int my_i = 0; my_i < SIZE; ++my_i){
      // comment before
      x[my_i] = y[my_i]; // comment right
      // comment after
  }

  return 0;
}
