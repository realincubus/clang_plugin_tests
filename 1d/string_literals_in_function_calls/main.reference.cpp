
void foo( const char* name )
{
  
}


int main(int argc, char** argv){
  int x[1000];

  #pragma omp parallel for 
for (auto t1=0;t1<=999;++t1) {
      foo("bar");
      x[t1] = 10;
}


  return 0;
}
