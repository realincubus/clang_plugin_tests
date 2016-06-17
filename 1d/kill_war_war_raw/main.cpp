


int main(int argc, char** argv){
  
    int y = 0;  

    for (int i = 0; i < 100; ++i){
        int x = y;
	x = 1 - x;
    }

    return 0;
}
