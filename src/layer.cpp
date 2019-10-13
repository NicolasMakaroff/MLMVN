#include "layer.hpp"

layer::ComplexLayer::ComplexLayer(int inputNeurons, int outputNeurons, std::string activation) : 
inputNeurons(inputNeurons), outputNeurons(outputNeurons), activation(activation)
{
        weightsMatrix = arma::cx_mat(inputNeurons, outputNeurons, arma::fill::randu);
}

int layer::ComplexLayer::getInputNeurons(){
        return inputNeurons;
}

int layer::ComplexLayer::getOutputNeurons(){
        return outputNeurons;
}

std::string layer::ComplexLayer::getActivation(){
        return activation;
}

arma::cx_mat layer::ComplexLayer::getWeightsMatrix(){
        return weightsMatrix;
}

