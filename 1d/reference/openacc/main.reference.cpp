
struct A{
  int member_of_a;
};

int main(){

  A array_of_a[10];


  #pragma acc kernels 
for (auto t1=0;t1<=9;++t1) {
      A& a = array_of_a[t1];
      a.member_of_a = 4711;
}



} 
