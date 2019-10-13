#include<string>
#include "complex.hpp"

#if !defined(_ACTIVATION_H_)
#define _ACTIVATION_H_

class Activation{
        public:
        std::string type;

        private:
        Activation(std::string);
        std::string getType();
        void setType(std::string);
        complex_number::Complex<double> NonPeriodic(double); 
        complex_number::Complex<int> NonPeriodic(int);
        complex_number::Complex<double> Periodic(double);
        complex_number::Complex<int> Periodic(int);
        
};


#endif // _ACTIVATION_H_
