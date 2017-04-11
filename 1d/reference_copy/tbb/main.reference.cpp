#include <tbb/parallel_for.h>

struct A{
  int member_of_a;
};

int main(){

  A array1_of_a[10];
  A array2_of_a[10];

  tbb::parallel_for (0,9 + 1,[&](int t1) {
      A& a = array1_of_a[t1];
      A& b = array2_of_a[t1];
      a.member_of_a = b.member_of_a;
} );



} 
