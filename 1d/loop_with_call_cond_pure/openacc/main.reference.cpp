
#define SIZE 1000


int __attribute__((pure)) size(int i, int j) 
{
  return SIZE;
}

int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  if (size(1,2) >= 1){
  #pragma acc kernels 
  for (auto t1=0;t1<=size(1,2)-1;++t1) {
          x[t1] = y[t1]; 
  }
}

  return 0;
}
