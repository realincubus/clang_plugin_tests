
#define SIZE 1000


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  for (int my_i = 0; my_i < 1000; my_i += 2 ){
      x[my_i] = y[my_i];
  }

  return 0;
}