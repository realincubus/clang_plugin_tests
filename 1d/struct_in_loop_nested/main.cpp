
struct A{
  char a;
  int b;
  double c;
};

int main(int argc, char** argv){
    
  int nsteps = 100;

  for (int i = 0; i < 10; ++i){
    A a;
    // call(a);
    for (int j = 0; j < 20; ++j){
      a.b += j * 10;
    }
  }

  return 0;
}
