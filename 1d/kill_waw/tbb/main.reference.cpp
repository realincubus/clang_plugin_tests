#include <tbb/parallel_for.h>


int main(int argc, char** argv){
    

    tbb::parallel_for (0,99 + 1,[&](int t1) {
        double x;
        x = 0;
} );


    return 0;
}
