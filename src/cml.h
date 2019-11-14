#pragma once

#include <vector>

#include "types.h"

class CML
{
public:
    /**
     * Crea CML con una familia F de funciones que
     *  tiene monomios con coef. ppal. 1 de grados 0 a `grado`
     *  tiene otras funciones segun el `modo`
     *   ver modos en la implementacion
     */
    CML(int grado, uint modo)
    {
        F = fn_init(grado, modo);
    };

    /**
     * Inicializa con los datos (xi, yi) i=1...n
     * Encuentra a : predict(x*) = sum ai Fi(x*) i=1...n
     */
    void fit(Vector x, Vector y)
    {
        a = _fit(x, y);
    };

    /**
     * Predice un x* despues de calcular `fit`
     */
    double predict(double x)
    {
        return _predict(x);
    };

private:
    // familia de funciones F
    std::vector<std::function<double(double)>> F;

    // prediccion de los parametros que combinan
    // linealmente las funciones de F
    Vector a;

    std::vector<std::function<double(double)>> fn_init(int, uint);
    Vector _fit(Vector, Vector);
    double _predict(double);
};
