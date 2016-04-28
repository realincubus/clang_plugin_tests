


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

  if (n_el >= 1){
  #pragma omp parallel for 
  for (auto t1=0;t1<=n_el-1;++t1) {
        particles_2[t1].r = particles[t1].r  ;
  }
}

  return 0;
}
