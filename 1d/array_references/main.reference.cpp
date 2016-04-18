

void foo(int a_foo[10]){
}

int main(int argc, char** argv){
  
    int a_main[10];  

    #pragma omp parallel for 
for (auto t1=0;t1<=9;++t1) {
        foo(a_main);
}

    return 0;
}
