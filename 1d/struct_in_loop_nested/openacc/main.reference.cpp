
struct A{
  char a;
  int b;
  double c;
};

int main(int argc, char** argv){
    
  int nsteps = 100;

  #pragma acc kernels 
for (auto t1=0;t1<=9;++t1) {
      A a;
  for (auto t2=0;t2<=19;++t2) {
          a.b += t2 * 10;
  }
}


  return 0;
}
