// Author - Dvir Sadon
#pragma once
#include <complex>
#include <string>
using namespace std;

namespace solver
{
    /* Classes */
    class RealVariable
    {
        public:
            RealVariable() { ; }

            // Add
            friend RealVariable operator+(const RealVariable& x, const double y);
            friend RealVariable operator+(const RealVariable& x, const RealVariable &y);
            friend RealVariable operator+(const double y, const RealVariable& x);

            // Sub
            friend RealVariable operator-(const RealVariable& x, const double y);
            friend RealVariable operator-(const RealVariable& x,const RealVariable& y);
            friend RealVariable operator-(const double y, const RealVariable& x);

            // Mul
            friend RealVariable operator*(const RealVariable& x, const double y);
            friend RealVariable operator*(const RealVariable& x, const RealVariable &y);
            friend RealVariable operator*(const double y, const RealVariable& x);

            // Div
            friend RealVariable operator/(const RealVariable& x, const double y);
            friend RealVariable operator/(const RealVariable& x, const RealVariable &y);
            friend RealVariable operator/(const double y, const RealVariable& x);

            // Pow
            friend RealVariable operator^(const RealVariable &x, const double power);

            // Equals
            friend RealVariable operator==(const RealVariable& X, const double y);
            friend RealVariable operator==(const RealVariable& x, const RealVariable& y);
            friend RealVariable operator==(const double y, const RealVariable& X);
    };

    class ComplexVariable
    {
        public:
            /* Variables */
            double real,imag;

            /* Constuctors */
            ComplexVariable(double r, double i){ real=r; imag=i; }
            ComplexVariable() { ; }

            /* Operators */

            // Add 
            friend ComplexVariable operator+(const ComplexVariable& x, const complex<double> y);
            friend ComplexVariable operator+(const ComplexVariable& x,const ComplexVariable &y);
            friend ComplexVariable operator+(const complex<double> y,const ComplexVariable& x);

            // Sub
            friend ComplexVariable operator-(const ComplexVariable& x,const complex<double> y);
            friend ComplexVariable operator-(const ComplexVariable& x,const ComplexVariable &y);
            friend ComplexVariable operator-(const complex<double> y,const ComplexVariable& x);

            // Mul 
            friend ComplexVariable operator*(const ComplexVariable& x, const complex<double> y);
            friend ComplexVariable operator*(const ComplexVariable& x, const ComplexVariable &y);
            friend ComplexVariable operator*(const complex<double> y,const ComplexVariable& x);

            // Div
            friend ComplexVariable operator/(const ComplexVariable& x, const complex<double> y);
            friend ComplexVariable operator/(const ComplexVariable& x, const ComplexVariable &y);
            friend ComplexVariable operator/(const complex<double> y,const ComplexVariable& x);

            // Pow
            friend ComplexVariable operator^(const ComplexVariable &x, const complex<double> power);

            // Equals
            friend ComplexVariable operator==(const ComplexVariable &x, const ComplexVariable &y);
            friend ComplexVariable operator==(const ComplexVariable &x, const complex<double> y);
            friend ComplexVariable operator==(const complex<double> y,const ComplexVariable &X);
    };

    /* Functions */

    complex<double> solve (const ComplexVariable & x);
    double solve (const RealVariable& x);

    /* Custom Exceptions */

    class InvalidEquation: public exception
	{
	  virtual const char* what() const throw()
	  {
		  return "The Equation You Entered Is Invalid";
	  }
	};

    class NoAnswer: public exception
	{
	  virtual const char* what() const throw()
	  {
		  return "The Equation Has No Answer";
	  }
	};
    
}