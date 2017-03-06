#include <tbb/parallel_for.h>

class A;

class B {
  public:
    A* component_of_b;
};

class A {
  public:
    B* component_of_a1;
    B* component_of_a2;
};

int main(int argc, char** argv){

    A a1_array[10];
    A a2_array[10];

    
    tbb::parallel_for (0,9 + 1,[&](int t1) {
        a1_array[t1].component_of_a1 = a2_array[t1].component_of_a2;
} );


    return 0;
}
