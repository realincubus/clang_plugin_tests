
int main(int argc, char** argv){
    
  int nr = 10;
  int v = 10;
  int x[10];
  int y[10];

  if (nr >= 1){
  if (v == 0){
    #pragma acc kernels 
    for (auto t1=0;t1<=nr-1;++t1) {
            y[t1] = 5;
    }
  }  if (v >= 1){
    #pragma acc kernels 
    for (auto t1=0;t1<=nr-1;++t1) {
            x[t1] = 10;
    }
  }  if (v <= -1){
    #pragma acc kernels 
    for (auto t1=0;t1<=nr-1;++t1) {
            x[t1] = 10;
    }
  }}  


  return 0;
}
