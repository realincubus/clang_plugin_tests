#include <tbb/parallel_for.h>



int main(int argc, char** argv){
  
    int om_max = 1000;
    int im_max = 500;
    int x = 0;

    if (om_max >= 1){
  tbb::parallel_for (0,om_max-1 + 1,[&](int t1) {
          x = 10;
    tbb::parallel_for (0,im_max-1 + 1,[&](int t2) {
      	int x = 0;
      	x = -3;
    } );
  } );
}  

    return 0;
}
