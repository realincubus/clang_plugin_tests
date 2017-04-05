#include <cilk/cilk.h>




int main(){
  
  float arr_target_a[10];
  float arr_target;
  float arr_target_b[10];

  cilk_for (auto t1=0;t1<=9;++t1) {
      float a = 1;
      if ( a > 0.5 ) {
      arr_target_a[t1] = 8;
    }else{
      arr_target_b[t1] = 8;
    }
}

}
