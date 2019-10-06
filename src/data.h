#include<armadillo>
#include<csv.h>
#include<cstdio>

#if !defined(DATA_H_)
#define DATA_H_

class Data {

        public:
        bool discreteInput;
        bool discreteOutput;

        private:
        bool getDiscreteInput();
        bool getDiscreteOutput();
        void setDiscreteInput(bool);
        void setDiscreteOutput(bool);
        arma::vec convertData(FILE*);
};

#endif // DATA_H_
