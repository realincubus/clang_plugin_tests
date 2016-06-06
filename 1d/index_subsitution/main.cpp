



int main(int argc, char** argv){

  int NR = 10;
  int NZ = 8;
  double Eps[NR*NZ];
  int i = 0;

  for (int i = 0; i < NR; ++i) {
    for (int j = 0; j < NZ; ++j)  {
      if (j == 0 || i == NR - 1) {
	Eps[i * NZ +  j] = -100.;
      }
    }
  }

  return 0;
}
