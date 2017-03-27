
struct A{
  int member_of_a;
};

int main(){

  A array_of_a[10];


  for( int i = 0 ; i < 10 ; i++ ) {
    A& a = array_of_a[i];
    a.member_of_a = 4711;
  }


} 
