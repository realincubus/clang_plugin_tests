
struct A{
  char a;
  int b;
  double c;
};

int main(int argc, char** argv){
    

    for (int i = 0; i < 10; ++i){
      A a;
      a.b = i* 10;
    }

    return 0;
}
