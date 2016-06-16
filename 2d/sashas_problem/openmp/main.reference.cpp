


int main(){

  int x[100][1000];

  #pragma omp parallel for 
for (auto t1=0;t1<=999;++t1) {
  for (auto t2=0;t2<=99;++t2) {
          x[t2][t1] = 1;
  }
}


}

