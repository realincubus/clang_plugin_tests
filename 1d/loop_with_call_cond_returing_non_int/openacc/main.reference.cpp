
#define SIZE 1000

double size()
{
  return SIZE;
}

int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  #pragma acc kernels 
for (auto t1=0;t1 < size();++t1) {
      x[t1] = y[t1]; 
}


  return 0;
}
