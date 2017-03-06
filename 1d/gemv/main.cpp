

#include <numeric>
#include <iostream>
#include <memory>

int main(int argc, char** argv){

	unsigned int X = 8;
  unsigned int Y = 4;
  double* matrix = new double[Y*X]; 

  double* inputVector = new double[X];
	double* targetVector = new double[Y];

  std::iota(&matrix[0],&matrix[Y*X],0);
  std::iota(&inputVector[0],&inputVector[X],0);

	for ( int y = 0; y != Y; y++ ){
	  double target_0 = 0.0;
	 	for ( int x = 0; x != X; x++ ) {
	 		target_0 += matrix[x+y*X] * inputVector[x];
	 	}
	 	targetVector[y] = target_0;
	}

  return 0;
}
