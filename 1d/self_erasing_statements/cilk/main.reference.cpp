
// explanations here may not be the full truth 
// but there were problems with parsing this type of statements before
// so its still a valid test
int main(int argc, char** argv){
    

  // iterators
  int j = 0;
  int i = 0;

  int nr = 10;
  int n_el = 10;
  double var = 0;
  double dest; 

  // this is not parallelizable like its writen here
  // 
  // explanation:
  // if i = 0 one thread writes to var 
  // if another thread i != 0 it will also write to var
  for (i = 0; i < nr; ++i){

    if ( i >= 0 ) {
      var = 42;
    }else{
      // due to the fact that 
      // this branch can never be true 
      // pet will remove this statement 
      // which will make it very complicated 
      // for pluto to understand this
      var = -42;
    }

    dest = 10;
  }


  return 0;
}
