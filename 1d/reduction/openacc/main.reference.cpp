

int main(int argc, char** argv){


    int x[10];
    int sum = 0;

#pragma acc kernels
    for (int i = 0; i < 10; ++i){
      sum += 1;
    }
    return 0;
}
