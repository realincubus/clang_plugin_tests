

#include <stdlib.h>

struct V3d {
  double r;
  double z;
  double t;
};



int main(int argc, char** argv){
    
  // iterators
  int i = 0;
  int i_el = 0;
  V3d v_rel;
  int i_m = 0;
  int nr = 10;
  int nz = 10;
  int n_el = 10;
  int offset = 10;
  int offset2 = 10;
  const double constant = 1.1; 
  double dest = 0;

  V3d particles[1000];
  V3d particles_2[1000];

  for (i_el = 0; i_el < n_el; ++i_el){
    //i_m = drand48() * 1000;
    //v_rel.r = particles[i_el].r * constant - particles_2[i_m ].r;
    v_rel = particles[i_el]  ;
  }


  return 0;
}
