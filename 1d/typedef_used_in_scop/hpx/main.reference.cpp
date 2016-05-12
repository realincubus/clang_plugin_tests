#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>

// this is just a minimum example 
// the typedef in the function caused a problem in pet
// because its not a normal vardecl

struct A {
    int a;
};

int foo()
{
    typedef struct A A;
    A a;
    return a.a; 
}

int main(int argc, char** argv){
  
  int x[10];

  hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,9 + 1,[&](int t1) {
      x[t1] = foo();
} );


  return 0;
}
