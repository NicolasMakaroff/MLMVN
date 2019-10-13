#include<string>
#include<armadillo>

#if !defined(_LAYER_HPP_)
#define _LAYER_HPP_

namespace layer{
        
        class ComplexLayer{

                private:
                int inputNeurons;
                int outputNeurons;
                arma::cx_mat weightsMatrix;
                std::string activation;

                public:  
                ComplexLayer(int,int,std::string);
                int getInputNeurons();
                int getOutputNeurons();
                std::string getActivation();
                arma::cx_mat getWeightsMatrix();
        };

}

#endif // _LAYER_HPP_
