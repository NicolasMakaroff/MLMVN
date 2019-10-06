#include<string>

#if !defined(LOSSES_H_)
#define LOSSES_H_

class Losses{

        public:
        std::string lossName;
        bool discreteInput;
        bool discreteOutput;

        private:
        Losses();
        std::string getLossName();
        float MSE(float, float);
        float RMSE(float, float);
        float MAE(float, float);
        float errorRate(float);
        float angularRMSE(float, float);

};


#endif // LOSSES_H_
