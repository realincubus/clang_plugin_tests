#include <tbb/parallel_for.h>

struct A{
  char a;
  int b;
  double c;
};

int main(int argc, char** argv){
    

    tbb::parallel_for (0,9 + 1,[&](int t1) {
        A a;
        a.b = t1* 10;
} );


    return 0;
}
