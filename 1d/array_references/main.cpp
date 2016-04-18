

void foo(int a_foo[10]){
}

int main(int argc, char** argv){
  
    int a_main[10];  

    for (int i = 0; i < 10; ++i){
      foo(a_main);
    }
    return 0;
}
