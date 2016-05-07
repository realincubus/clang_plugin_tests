#include <tbb/parallel_for.h>

void foo( const char* name )
{
  
}


int main(int argc, char** argv){
  int x[1000];

  tbb::parallel_for (0,999 + 1,[&](int t1) {
      foo("bar");
      x[t1] = 10;
} );


  return 0;
}
