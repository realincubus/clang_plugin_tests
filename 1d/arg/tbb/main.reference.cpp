

void foo(const int* a, int* b){
  b[0] = 5;
}

int main(int argc, char** argv){
  
    int a;
    int b[11];  

    for (int i = 0; i < 10; ++i){
      foo(&a, &a);
      foo(&b[i],&b[i+1]);
    }

    return 0;
}
