
#define SIZE 1000

struct ExampleStruct {
    double element;
};


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  
  ExampleStruct es;

  es.element = 42;

  for (int my_i = 0; my_i < 1000; ++my_i){
      x[my_i] = y[my_i] + es.element; 
  }

  return 0;
}
