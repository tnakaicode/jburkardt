int a_log ( int rule );
int a_power ( int rule );
int a_regular ( int rule );
double integral_log ( );
double integral_power ( );
double integral_regular ( );
double *integrand_log ( int n, double x[] );
double *integrand_power ( int n, double x[] );
double *integrand_regular ( int n, double x[] );
int j_log ( int rule );
int j_power ( int rule );
int j_regular ( int rule );
int num_log ( );
int num_power ( );
int num_regular ( );
int order_log ( int rule );
double order_power ( int rule );
int order_regular ( int rule );
void r8vec_copy ( int n, double a1[], double a2[] );
double r8vec_dot_product ( int n, double a1[], double a2[] );
double *r8vec_linspace_new ( int n, double a, double b );
double r8vec_sum ( int n, double a[] );
double *r8vec_uniform_01_new ( int n, int &seed );
void rule_log ( int rule, int j, double x[], double w[] );
void rule_power ( int rule, int j, double x[], double w[] );
void rule_regular ( int rule, int j, double x[], double w[] );
void timestamp ( );