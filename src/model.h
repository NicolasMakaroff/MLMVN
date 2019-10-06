#include "losses.h"
#include "data.h"
#include<string>


#if !defined(MODEL_H_)
#define MODEL_H_

class Model{

        public:
        int* sizeOfMlmvn;
        arma::vec input;
        std::string stoppingCriteria;
        bool discreteInput;
        bool discreteOutput;
        float globalThresholdValue;
        float localThresholdValue;
        std::string initialWeights;
        int numberSectors;
        //bool SoftMargins;
        float angularGlobalThresholdValue;
        float angularLocalThresholdValue;

        private:
        int* getSizeOfMlmvn();
        std::string getStoppingCriteria();
        bool getDiscreteInput();
        bool getDiscreteOutput();
        float getGlobalThresholdValue();
        float getLocalThresholdValue();
        std::string getInitialWeights();
        int getNumberSectors();
        float getAngularGlobalThresholdValue();
        float getAngularLocalThresholdValue();

};


#endif // MODEL_H_
