
#include <iostream>

int main(int argc, char** argv){


    int x[10];
    int sum = 0;

    for (int i = 0; i < 10; ++i){
      x[i] = 0;
      sum +=  i;
    }

    std::cout << "sum: " << sum  << std::endl;
    
    return 0;
}
