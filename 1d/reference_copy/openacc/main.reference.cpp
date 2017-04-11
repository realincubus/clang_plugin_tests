
struct A{
  int member_of_a;
};

int main(){

  A array1_of_a[10];
  A array2_of_a[10];

  #pragma acc kernels 
for (auto t1=0;t1<=9;++t1) {
      A& a = array1_of_a[t1];
      A& b = array2_of_a[t1];
      a.member_of_a = b.member_of_a;
}



} 
