



struct A {
  int memeber_a;
  double member_b;
};


int main( int argc, char** argv ) {


  A a1[10];
  A a2[10];

  for( int i = 0 ; i < 10 ; i++ ) {
    a1[i] = a2[i];
  }

}
