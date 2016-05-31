

int main(int argc, char** argv){
    
  int sum_a = 0;
  int sum_b = 0;  

  int x[100];
  int y[100];

  #pragma omp parallel for reduction( +:sum_a,sum_b)
for (auto t1=0;t1<=99;++t1) {
        sum_a += x[t1];
        sum_b += y[t1];
}


  return 0;
}
