#include <cilk/cilk.h>

struct A{
  char a;
  int b;
  double c;
};

int main(int argc, char** argv){
    

    cilk_for (auto t1=0;t1<=9;++t1) {
        A a;
        a.b = t1* 10;
}


    return 0;
}
