



int main(int argc, char** argv){
  
  decltype(10) a[10];  

  #pragma acc kernels 
for (auto t1=0;t1<=9;++t1) {
      a[t1] = 1;
}

  return 0;
}
