#include "complex.hpp"
#include "layer.hpp"
#include "activation.hpp"
#include<iostream>

using namespace complex_number;
using namespace activation;

int main(){
        //layer::ComplexLayer layer(5,5,"test"); 
        //std::cout << " weights are " << layer.getWeightsMatrix() << '\n';
        std::complex<double> z1 = std::complex<double>(0.5,0.5);
        std::complex<double> z2 = std::complex<double>(-0.5,0.5);
        std::complex<double> z3 = std::complex<double>(-0.5,-0.5);
        std::complex<double> z4 = std::complex<double>(0.5,-0.5);
        std::cout << "arg(z1) : " << std::arg(z1) << '\n' ;
        std::cout << "arg(z2) : " << std::arg(z2) << '\n' ;
        std::cout << "arg(z3) : " << std::arg(z3) << '\n' ;
        std::cout << "arg(z4) : " << std::arg(z4) << '\n' ;
        std::cout << "shift(z1) : " << shiftAngle(std::arg(z1)) << '\n' ;
        std::cout << "shift(z2) : " << shiftAngle(std::arg(z2)) << '\n' ;
        std::cout << "shift(z3) : " << shiftAngle(std::arg(z3)) << '\n' ;
        std::cout << "shift(z4) : " << shiftAngle(std::arg(z4)) << '\n' ;
        std::cout << "cat 1 : " << int(floor((4 * shiftAngle(std::arg(z1)))/(2*M_PI))) +1 << '\n';
        std::cout << "cat 2 : " << int(floor((4 * shiftAngle(std::arg(z2)))/(2*M_PI))) +1 << '\n';
        std::cout << "cat 3 : " << int(floor((4 * shiftAngle(std::arg(z3)))/(2*M_PI))) +1 << '\n';
        std::cout << "cat 4 : " << int(floor((4 * shiftAngle(std::arg(z4)))/(2*M_PI))) +1 << '\n';
        std::complex<double> proj = NonPeriodicDiscrete(z1,4);
        std::complex<double> proj2 = NonPeriodicDiscrete(z2,4);
        std::complex<double> proj3 = NonPeriodicDiscrete(z3,4);
        std::complex<double> proj4 = NonPeriodicDiscrete(z4,4);
        std::cout << " Non Periodic Discrete 1 : " <<  proj << '\n' ;
        std::cout << " Non Periodic Discrete 2 : " <<  proj2 << '\n' ;
        std::cout << " Non Periodic Discrete 3 : " <<  proj3 << '\n' ;
        std::cout << " Non Periodic Discrete 4 : " <<  proj4 << '\n' ;
        return 0;
}