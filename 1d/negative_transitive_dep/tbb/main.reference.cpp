




int main(int argc, char** argv){
  
    int a = 0;
    int x[10];

    for (int i = 1; i < 10; ++i){
      a = i - 1;
      x[i] = x[a];
    }  

    return 0;
}
