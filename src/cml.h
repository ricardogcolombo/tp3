#pragma once

#include "types.h"

#include <vector>

class CML {
public:
    CML(const std::function<Vector(double)> &func,int size);

    void fit(Vector x,Vector y);
    double predict(double a);
    Matrix getA();
    Vector getB();
    Vector appF(int a);
private:
    std::function<Vector(double)> f;
    int size;
    Matrix ata;
    Vector atb;
    Vector pred;
};
