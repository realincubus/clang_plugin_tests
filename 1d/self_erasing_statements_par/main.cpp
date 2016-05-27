


int main(int argc, char** argv){
    
    int x[10];

    for (int i = 0; i < 10; ++i){
        if ( i < -2 ) {
	  // this can never happen
	  x[i] = -5;
	}else{
	  x[i] = 5;
	}
    }

    return 0;
}
