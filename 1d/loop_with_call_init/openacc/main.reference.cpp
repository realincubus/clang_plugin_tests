

int begin()
{
  return 0;
}


int main(int argc, char** argv){
    
  int x[1000];
  int y[1000];

  if (begin() <= 999){
  #pragma acc kernels 
  for (auto t1=begin();t1<=999;++t1) {
        x[t1] = y[t1];
  }
}
    
  return 0;
}
