

int begin()
{
  return 0;
}


int main(int argc, char** argv){
    
  int x[1000];
  int y[1000];

  for (int i = begin(); i < 1000; ++i){
    x[i] = y[i];
  }
    
  return 0;
}
