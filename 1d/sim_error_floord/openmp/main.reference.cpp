#include <cmath>

int main(int argc, char** argv){
    
  int dp = 10;
  int other = 10;
  int x[10];

  if (dp >= 2){
  for (auto t1=0;t1<=std::floor( (double)(dp-2) /2);++t1) {
        int sum = 0;
    #pragma omp parallel for reduction( +:sum)
    for (auto t3=0;t3<=other-1;++t3) {
            sum += t3*3;
    }
        x[t1] = sum;
  }
}
  return 0;
}
