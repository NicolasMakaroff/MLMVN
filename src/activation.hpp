#include<string>
#include<math.h>
#include<cmath>
#include<complex>
//#include "complex.hpp"

#if !defined(_ACTIVATION_H_)
#define _ACTIVATION_H_

namespace activation{

        std::string getType();

        void setType(std::string);

        std::complex<double> NonPeriodicDiscrete(std::complex<double>, int categories); 

        std::complex<double> NonPeriodicContinuous(std::complex<double>);

        std::complex<double> PeriodicDiscrete(std::complex<double>, int,int);

        std::complex<double> PeriodicContinuous(std::complex<double>, int, int);

        double shiftAngle(double);


}







#endif // _ACTIVATION_H_
