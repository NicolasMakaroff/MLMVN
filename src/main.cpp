#include "complex.hpp"
#include "layer.hpp"
#include<iostream>

using namespace complex_number;

int main(){
        layer::ComplexLayer layer(5,5,"test");
        std::cout << " weights are " << layer.getWeightsMatrix() << '\n';
        return 0;
}