
void foo( const char* name )
{
  
}


int main(int argc, char** argv){
  int x[1000];

  for (int i = 0; i < 1000; ++i){
    foo("bar");
    x[i] = 10;
  }

  return 0;
}
