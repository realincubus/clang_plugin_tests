




int main(int argc, char** argv){
    
  const int N = 1000;
  int x[N];
  int y[N];

  if (N >= 1){
  #pragma omp parallel for 
  for (auto t1=0;t1<=N-1;++t1) {
        x[t1] = y[t1];
  }
}
    
  return 0;
}
