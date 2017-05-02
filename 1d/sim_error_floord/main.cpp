
int main(int argc, char** argv){
    
  int dp = 10;
  int other = 10;
  int x[10];

  for (int i = 0; i < dp/2; ++i){
    int sum = 0;
    for (int j = 0; j < other; ++j){
      //double k = j*3;
      sum += j*3;
    }
    x[i] = sum;
  }
  return 0;
}
