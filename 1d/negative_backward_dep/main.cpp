


int main(int argc, char** argv){
    
    int x[10];  

    for (int i = 1; i < 10; ++i){
        x[i] = x[i-1];
    }

    return 0;
}
