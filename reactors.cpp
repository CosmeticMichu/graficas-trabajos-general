#include <vector>
#include "integration.h"

const double A0 = ; // ??
const double TAU = ; // ??
const double K = ; // ?
const double TA = 0;
const double TB = 50.0;
const double H  = 0.01;

typedef std::vector<double> state_t;

void fderiv(const state_t & y, state_t & dydt, double t)
{
    // FILL HERE
}


int main (int argc, char **argv)
{
    std::vector<double> y = {0.0, 0.0, 0.0, 0.0}; // {A10, A20, B10, B20}

    integrate(fderiv, y, TA, TB, H);

    return 0;
}
