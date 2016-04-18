// this is realted to variable_not_zero 
// but does not include any parameters from outside the scop


int main(int argc, char** argv){

    int x[1000];
    int outside = 0;

    for (int i = 0; i < 1000; ++i){
      if ( outside > 0 || outside < 0 ) {
	x[i] = 10;
      }
    }
    return 0;
}
