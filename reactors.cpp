#include <vector>
#include "integration.h"

const double A0 = 20; // ??
const double TAU = 5; // ??
const double K = 0.12; // ?
const double TA = 0;
const double TB = 50.0;
const double H  = 0.01;

typedef std::vector<double> state_t;

void fderiv(const state_t & y, state_t & dydt, double t)
{
    dydt[0]=(1/TAU)*(A0-y[0])-K*y[0];//dA1/dt
    dydt[1]=(1/TAU)*(y[0]-y[1])-K*y[1];//dA2/dt
    dydt[2]=(1/TAU)*(y[2])-K*y[0];//dB1/dt
    dydt[3]=(1/TAU)*(y[2]-y[3])-K*y[1];//dB2/dt
}


int main (int argc, char **argv)
{
    std::vector<double> y = {0.0, 0.0, 0.0, 0.0}; // {A10, A20, B10, B20}

    integrate(fderiv, y, TA, TB, H);

    return 0;
}
