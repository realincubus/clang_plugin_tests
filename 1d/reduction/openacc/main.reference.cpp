
#include <iostream>

int main(int argc, char** argv){


    int x[10];
    int sum = 0;

    #pragma acc kernels 
for (auto t1=0;t1<=9;++t1) {
        x[t1] = 0;
        sum +=  t1;
}


    std::cout << "sum: " << sum  << std::endl;
    
    return 0;
}
