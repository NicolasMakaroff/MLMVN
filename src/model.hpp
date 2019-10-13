#include "losses.h"
#include "data.h"
#include<string>
#include<list>
#include "layer.hpp"

#if !defined(MODEL_H_)
#define MODEL_H_

class Model{

        public:
        int hiddenLayers;
        int nbCategories;


        private:
        Model();
        Model(std::list<layer::ComplexLayer>);
        void train();
        double fit();
        double predict(double);

};


#endif // MODEL_H_
