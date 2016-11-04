
#include <gtest/gtest.h>
#include <array>
#define SIZE 1000

using namespace std;

TEST( EXAMPLE, Positive ) {
  array<double,SIZE> x;
  for( int i = 0 ; i < x.size() ; i++ ) {
    x[i] = 10;
  }

  EXPECT_EQ( x[0], 10 );
}
