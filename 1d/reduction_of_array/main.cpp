// in theory this could be understood as a reduction to each member of the x array
// but no framework supports this so pet must not handle it this way

int main(int argc, char** argv){
    
    int x[100];

    for (int i = 0; i < 100; ++i){
      x[i] += i;
    }

    return 0;
}
