
#define SIZE 1000

double size()
{
  return SIZE;
}

int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  for (int my_i = 0; my_i < size(); ++my_i){
      x[my_i] = y[my_i]; 
  }

  return 0;
}
