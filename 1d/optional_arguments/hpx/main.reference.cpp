#include <hpx/hpx_main.hpp>
#include <hpx/parallel/algorithms/for_loop.hpp>


void foo( int i = 0 )
{
  
}


int main(int argc, char** argv){
    
    int x[10];

    hpx::parallel::v2::for_loop (hpx::parallel::v1::par, 0,9 + 1,[&](int t1) {
        foo();
        x[t1] = 0;
} );


    return 0;
}
