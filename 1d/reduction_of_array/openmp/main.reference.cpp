// in theory this could be understood as a reduction to each member of the x array
// but no framework supports this so pet must not handle it this way

int main(int argc, char** argv){
    
    int x[100];

    #pragma omp parallel for 
for (auto t1=0;t1<=99;++t1) {
        x[t1] += t1;
}


    return 0;
}
