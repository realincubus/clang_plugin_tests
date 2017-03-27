#include <tbb/parallel_for.h>

struct A{
  int member_of_a;
};

int main(){

  A array_of_a[10];


  tbb::parallel_for (0,9 + 1,[&](int t1) {
      A& a = array_of_a[t1];
      a.member_of_a = 4711;
} );



} 
