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

        ComplexLayer::ComplexLayer(int inputNeurons, int outputNeurons, std::string activation) : 
        inputNeurons(inputNeurons), outputNeurons(outputNeurons), activation(activation)
        {
                weightsMatrix = arma::cx_mat(inputNeurons, outputNeurons, arma::fill::randu);
        }

        int ComplexLayer::getInputNeurons(){
                return inputNeurons;
        }

        int ComplexLayer::getOutputNeurons(){
                return outputNeurons;
        }

        std::string ComplexLayer::getActivation(){
                return activation;
        }

        arma::cx_mat ComplexLayer::getWeightsMatrix(){
                return weightsMatrix;
        }


}

#endif // _LAYER_HPP_
