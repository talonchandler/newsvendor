#ifndef Instance_H_
#define Instance_H_
#include "settings.h"

class Instance{
 public:
  int reps;
  Demand demand;
  double epsilon;
  double delta;
  BH bh;
  double N_frac;
  double N;
  double y_hat;
  double y_hat_interp;
  double y_star;
  double c_hat;
  double c_hat_interp;
  double c_star;
  double SAA_eps_avg;
  double SAA_eps_conf;
  double SAA_eps_avg_interp;
  double SAA_eps_conf_interp;
  double eps_delta_fractile;
  double eps_fraction;
  Instance();
  Instance(double p_reps, Demand p_demand, double p_epsilon, double p_delta, BH p_bh, double p_N_frac);
  
  void evaluate(vector<vector<double> > samples);
  void print_output(char* path);
};

void print_output_header(char* path);
double cost(double y, Demand demand, BH bh);
double interp_eval(vector<double> samples, double input);
double average(vector<double> data);
double conf(vector<double> data, int N);

#endif // Instance_H_
