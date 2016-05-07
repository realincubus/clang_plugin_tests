#include <cilk/cilk.h>

#define SIZE 1000

struct ExampleStruct {
    double element;
};


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  
  ExampleStruct es;

  es.element = 42;

  cilk_for (auto t1=0;t1<=999;++t1) {
        x[t1] = y[t1] + es.element; 
}


  return 0;
}
