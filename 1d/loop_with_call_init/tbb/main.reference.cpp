#include <tbb/parallel_for.h>


int begin()
{
  return 0;
}


int main(int argc, char** argv){
    
  int x[1000];
  int y[1000];

  if (begin() <= 999){
  tbb::parallel_for (begin(),999 + 1,[&](int t1) {
        x[t1] = y[t1];
  } );
}
    
  return 0;
}
