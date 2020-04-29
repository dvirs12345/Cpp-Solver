// Author - Dvir Sadon
#include "solver.hpp"
#include <iostream>
#include <string>
#include <complex>
using namespace std;
using namespace solver;

namespace solver
{
    double solve (const RealVariable& x) { return 0; }
    complex<double> solve (const ComplexVariable & x) { return *(new complex<double>);}
    /* RealVariable */

    // + 
    RealVariable operator+(const RealVariable& x, const RealVariable &y) { return *(new RealVariable()); } 
    RealVariable operator+(const RealVariable& x, const double y) { return *(new RealVariable()); }
    RealVariable operator+(const double y, const RealVariable& x) { return *(new RealVariable()); }

    // - 
    RealVariable operator-(const RealVariable& x,const RealVariable& y) { return *(new RealVariable()); }
    RealVariable operator-(const RealVariable& x, const double y) { return *(new RealVariable()); }
    RealVariable operator-(const double y, const RealVariable& x) { return *(new RealVariable()); }

    //* 
    RealVariable operator*(const RealVariable& x, const RealVariable &y) { return *(new RealVariable()); }
    RealVariable operator*(const RealVariable& x, const double y) { return *(new RealVariable()); }
    RealVariable operator*(const double y, const RealVariable& x) { return *(new RealVariable()); }

    // Divide
    RealVariable operator/(const RealVariable& x, const RealVariable &y) { return *(new RealVariable()); }
    RealVariable operator/(const RealVariable& x, const double y) { return *(new RealVariable()); }
    RealVariable operator/(const double y, const RealVariable& x) { return *(new RealVariable()); }

    // ^ 
    RealVariable operator^(const RealVariable &x, const double power) { return *(new RealVariable()); }

    // == 
    RealVariable operator==(const RealVariable& x, const RealVariable& y) { return *(new RealVariable()); }
    RealVariable operator==(const RealVariable& X, const double y) { return *(new RealVariable()); }
    RealVariable operator==(const double y, const RealVariable& X) { return *(new RealVariable()); }


    /*ComplexVariable*/

    // + 
    ComplexVariable operator+(const ComplexVariable& x,const ComplexVariable &y) { return *(new ComplexVariable()); }
    ComplexVariable operator+(const ComplexVariable& x, const complex<double> y) { return *(new ComplexVariable()); }
    ComplexVariable operator+(const complex<double> y,const ComplexVariable& x) { return *(new ComplexVariable()); }

    // - 
    ComplexVariable operator-(const ComplexVariable& x,const ComplexVariable &y) { return *(new ComplexVariable()); }
    ComplexVariable operator-(const ComplexVariable& x,const complex<double> y) { return *(new ComplexVariable()); }
    ComplexVariable operator-(const complex<double> y,const ComplexVariable& x) { return *(new ComplexVariable()); }

    // * 
    ComplexVariable operator*(const ComplexVariable& x, const ComplexVariable &y) { return *(new ComplexVariable()); }
    ComplexVariable operator*(const ComplexVariable& x, const complex<double> y) { return *(new ComplexVariable()); }
    ComplexVariable operator*(const complex<double> y,const ComplexVariable& x) { return *(new ComplexVariable()); }

    // Divide
    ComplexVariable operator/(const ComplexVariable& x, const ComplexVariable &y) { return *(new ComplexVariable()); }
    ComplexVariable operator/(const ComplexVariable& x, const complex<double> y) { return *(new ComplexVariable()); }
    ComplexVariable operator/(const complex<double> y,const ComplexVariable& x) { return *(new ComplexVariable()); }

    // ^ 
    ComplexVariable operator^(const ComplexVariable &x, const complex<double> power) { return *(new ComplexVariable()); }

    // == 
    ComplexVariable operator==(const ComplexVariable &x, const ComplexVariable &y) { return *(new ComplexVariable()); }
    ComplexVariable operator==(const ComplexVariable &x, const complex<double> y) { return *(new ComplexVariable()); }
    ComplexVariable operator==(const complex<double> y,const ComplexVariable &X) { return *(new ComplexVariable()); }
}