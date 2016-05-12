
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

  for (int i = 0; i < 10; ++i){
    x[i] = foo();
  }

  return 0;
}
