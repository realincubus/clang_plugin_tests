

void foo( int i = 0 )
{
  
}


int main(int argc, char** argv){
    
    int x[10];

    for (int i = 0; i < 10; ++i){
      foo();
      x[i] = 0;
    }

    return 0;
}
