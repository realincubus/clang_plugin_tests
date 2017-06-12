



int main(int argc, char** argv){
  
  int x[100];

  for (int i = 0; i < 100; ++i){
    x[i] = 123123;
  }

  for (int i = 0; i < 100; ++i){
    x[i] = 4711;
  }
    
  return 0;
}
