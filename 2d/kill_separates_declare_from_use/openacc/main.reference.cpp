


int main(int argc, char** argv){
  
    #pragma acc kernels 
for (auto t1=0;t1<=999;++t1) {
        int x = 4711;
  for (auto t2=0;t2<=499;++t2) {
    	x = 9 + x ;
  }
}
  

    return 0;
}
