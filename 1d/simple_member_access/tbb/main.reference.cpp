#include <tbb/parallel_for.h>

#define SIZE 1000

struct ExampleStruct {
    double element;
};


int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  
  ExampleStruct es;

  es.element = 42;

  tbb::parallel_for (0,999 + 1,[&](int t1) {
        x[t1] = y[t1] + es.element; 
} );


  return 0;
}
