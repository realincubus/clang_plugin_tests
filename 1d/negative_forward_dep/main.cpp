


int main(int argc, char** argv){
    
    int x[10];  

    for (int i = 0; i < 9; ++i){
        x[i] = x[i+1];
    }

    return 0;
}
