



struct A {
  int memeber_a;
  double member_b;
};


int main( int argc, char** argv ) {


  A a1[10];
  A a2[10];

  #pragma acc kernels 
for (auto t1=0;t1<=9;++t1) {
      a1[t1] = a2[t1];
}


}
