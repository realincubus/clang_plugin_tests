


int main(int argc, char** argv){
  
    int om_max = 1000;
    int im_max = 500;
    int x = 0;

    if (om_max >= 1){
  #pragma acc kernels 
  for (auto t1=0;t1<=om_max-1;++t1) {
          x = 10;
    for (auto t2=0;t2<=im_max-1;++t2) {
      	int x = 0;
      	x = -3;
    }
  }
}  

    return 0;
}
