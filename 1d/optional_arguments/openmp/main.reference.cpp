

void foo( int i = 0 )
{
  
}


int main(int argc, char** argv){
    
    int x[10];

    #pragma omp parallel for 
for (auto t1=0;t1<=9;++t1) {
        foo();
        x[t1] = 0;
}


    return 0;
}
