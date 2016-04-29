
struct A;

struct B {
    A* component_of_b;
};

struct A {
    B* component_of_a1;
    B* component_of_a2;
};

int main(int argc, char** argv){

    A a1_array[10];
    A a2_array[10];

    
    for (int i = 0; i < 10; ++i){
      a1_array[i].component_of_a1 = a2_array[i].component_of_a2;
    }

    return 0;
}
