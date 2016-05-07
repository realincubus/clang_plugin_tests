
#define SIZE 1000

int size()
{
  return SIZE;
}

int main(int argc, char** argv){
  double x[SIZE];
  double y[SIZE];
  

  if (size() >= 1){
  #pragma omp parallel for 
  for (auto t1=0;t1<=size()-1;++t1) {
          x[t1] = y[t1]; 
  }
}

  return 0;
}
