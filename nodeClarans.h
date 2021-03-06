#ifndef NODECLARANS_H
#define NODECLARANS_H

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>

class nodeClarans
{
    public:
        nodeClarans pickRandomNeighbor(const std::vector<std::vector<double> > &dane, const int medoidsQuantity);

        std::vector<int> getPosVector() {return posVector;}
        std::vector<std::vector<double> > getDataVector() {return dataVector;}

        void printPosVector();
        void printDataVector();

        void setNode(std::vector<int> posVector, std::vector<std::vector<double> > dataVector)
        {
            this->posVector = posVector;
            this->dataVector = dataVector;
        }

    private:
        std::vector<int> posVector;
        std::vector<nodeClarans> createdNeighbors;
        std::vector<std::vector<double> > dataVector;

};

#endif // NODECLARANS_H
