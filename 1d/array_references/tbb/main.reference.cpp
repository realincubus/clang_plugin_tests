#include <tbb/parallel_for.h>


void foo(int a_foo[10]){
}

int main(int argc, char** argv){
  
    int a_main[10];  

    tbb::parallel_for (0,9,[&](int t1) {
        foo(a_main);
} );

    return 0;
}
