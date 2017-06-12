



int main(int argc, char** argv){
  
  int x[100];

  #pragma omp parallel for 
for (auto t1=0;t1<=99;++t1) {
      x[t1] = 123123;
}

    
  return 0;
}
