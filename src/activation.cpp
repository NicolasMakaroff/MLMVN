#include "activation.hpp"

/** Short class for different activation functions */

// Discrete activation function


std::string activation::getType(){
        return "ToDo";
}

void activation::setType(std::string type){

}


std::complex<double> activation::NonPeriodicDiscrete(std::complex<double> z_, int categories){
        double arg_z = activation::shiftAngle(std::arg(z_));
        int cat =  int(floor((categories * arg_z)/(2*M_PI)));
        std::complex<double> projection = std::complex<double>(std::polar(1.0,2*M_PI*cat / categories));
        
        if(std::imag(projection) < 0.000001){
                std::complex<double> z1 = std::complex<double>(std::real(projection),0);
                return z1;
        }
        if(std::real(projection) < 0.000001){
                std::complex<double> z2 = std::complex<double>(0,std::imag(projection));
                return z2;
        }

        return projection;
}

std::complex<double> activation::NonPeriodicContinuous(std::complex<double> z_){
        double arg_z = shiftAngle(std::arg(z_));
        std::complex<double> projection = std::polar(1.0,arg_z);
        if(std::imag(projection) < 0.000001){
                projection = std::complex<double>(std::real(projection),0);
        }
        return projection;
}

std::complex<double> PeriodicDiscrete(std::complex<double> z_, int categories, int periods){
        double arg_z = activation::shiftAngle(std::arg(z_));
        int cat = int(floor((categories * periods * arg_z)/2*M_PI));
        double arg2 = std::fmod(cat,categories);
        std::complex<double> projection = std::polar(1.0, 2*M_PI*arg2 / categories);
        if(std::imag(projection) < 0.000001){
                projection = std::complex<double>(std::real(projection),0);
        }
        return projection;
}
/**
std::complex<double> PeriodicContinuous(std::complex<double> z_, int periods){

}*/

double activation::shiftAngle(double z){
        return std::fmod(z + 2*M_PI,2*M_PI);
}

