


int main(int argc, char** argv){
  
    int y = 0;  

    #pragma acc kernels 
for (auto t1=0;t1<=99;++t1) {
          int x = y;
  	x = 1 - x;
}


    return 0;
}
