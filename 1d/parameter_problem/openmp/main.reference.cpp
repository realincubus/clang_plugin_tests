

int main(int argc, char** argv){
  
  int X = 10;
  int C = 20;
  int a[X*C];
  int b[X*C];

  if ((C >= 1) && (X >= 1)){
  #pragma omp parallel for 
  for (auto t1=0;t1<=C-1;++t1) {
    for (auto t2=0;t2<=X-1;++t2) {
            a[t1*X+t2] = b[t1*X+t2];
    }
  }
}  

  return 0;
}
