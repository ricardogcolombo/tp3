#pragma once

#include "types.h"

#include <vector>

class CML {
public:
     /**
     * Crea CML con una familia F de funciones de tamaño size
     */
    CML(const std::function<Vector(double)> &F,int size)
    {
        this->F = F;
        this->size = size;
    };

    /**
     * Inicializa con los datos (xi, yi) i=1...n
     * Encuentra a : predict(x*) = sum ai Fi(x*) i=1...n
     */
    void fit(Vector x, Vector y)
    {
        this->a = _fit(x, y);
    };

    /**
     * Predice un x* despues de calcular `fit`
     */
    double predict(double x)
    {
        return _predict(x);

    };

    Vector coef()
    {
        return a;
    };
private:
    // familia de funciones F
    std::function<Vector(double)> F;
    int size;

    // prediccion de los parametros que combinan
    // linealmente las funciones de F
    Vector a;

    Vector _fit(Vector,Vector);
    double _predict(double);
};
