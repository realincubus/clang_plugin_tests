#include <cilk/cilk.h>
// this is realted to variable_not_zero 
// but does not include any parameters from outside the scop


int main(int argc, char** argv){

    int x[1000];
    int outside = 0;

    cilk_for (auto t1=0;t1<=999;++t1) {
  if (outside >= 1){
    	x[t1] = 10;
  }  if (outside <= -1){
    	x[t1] = 10;
  }}

    return 0;
}
