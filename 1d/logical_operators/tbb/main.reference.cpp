#include <tbb/parallel_for.h>
// this is realted to variable_not_zero 
// but does not include any parameters from outside the scop


int main(int argc, char** argv){

    int x[1000];
    int outside = 0;

    tbb::parallel_for (0,999 + 1,[&](int t1) {
  if (outside >= 1){
    	x[t1] = 10;
  }  if (outside <= -1){
    	x[t1] = 10;
  }} );

    return 0;
}
