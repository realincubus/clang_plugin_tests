
struct A{
  int member_of_a;
};

int main(){

  A array1_of_a[10];
  A array2_of_a[10];

  for( int i = 0 ; i < 10 ; i++ ) {
    A& a = array1_of_a[i];
    A& b = array2_of_a[i];
    a.member_of_a = b.member_of_a;
  }


} 
