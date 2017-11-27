#include <tbb/parallel_for.h>

struct A{
  char a;
  int b;
  double c;
};

int main(int argc, char** argv){
    
  int nsteps = 100;

  tbb::parallel_for (0,9 + 1,[&](int t1) {
      A a;
  for (auto t2=0; t2<=19;++t2) {
          a.b += t2 * 10;
  } 
} );


  return 0;
}
