



int main(int argc, char** argv){
    #pragma omp parallel for 
for (auto t1=0;t1<=99;++t1) {
        int x[100];
        x[t1] = 0;
}

    return 0;
}
