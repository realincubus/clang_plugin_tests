
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

  #pragma omp parallel for 
for (auto t1=0;t1<=9;++t1) {
      x[t1] = foo();
}


  return 0;
}
