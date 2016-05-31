

int main(int argc, char** argv){
    
    int sum = 0;
    int prod = 0;

    #pragma omp parallel for reduction( *:prod), reduction( +:sum)
for (auto t1=0;t1<=9;++t1) {
        sum += t1;
        prod *= t1;
}


    return 0;
}
