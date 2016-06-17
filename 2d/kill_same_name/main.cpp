


int main(int argc, char** argv){
  
    int om_max = 1000;
    int im_max = 500;
    int x = 0;

    for (int i = 0; i < om_max; ++i){
      x = 10; // makes outermost loop not parallel
      for (int j = 0; j < im_max; ++j){
	int x = 0;
	x = -3; // should be ok 
      }
    }  

    return 0;
}
