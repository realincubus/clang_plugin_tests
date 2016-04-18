
#define SIZE_X 1000
#define SIZE_Y 500

int main(int argc, char** argv){
    
    double a[SIZE_Y][SIZE_X];
    double b[SIZE_Y][SIZE_X];

    #pragma omp parallel for 
for (auto t1=0;t1<=499;++t1) {
  auto lbv=0;
  auto ubv=999;
  #pragma ivdep
  #pragma vector always
  for (auto t2=lbv;t2<=ubv;++t2) {
              b[t1][t2] = a[t1][t2];
  }
}


    return 0;
}
