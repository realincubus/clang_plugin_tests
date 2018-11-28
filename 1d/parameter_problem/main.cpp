

int main(int argc, char** argv){
  
  int X = 10;
  int C = 20;
  int a[X*C];
  int b[X*C];

  for (auto i=0;i<C;++i) {
    for (auto j=0;j<X;++j) {
    	a[i*X+j] = b[i*X+j];
    }
  }

  return 0;
}
