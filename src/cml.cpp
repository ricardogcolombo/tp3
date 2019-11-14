#include <algorithm>
#include <numeric>
#include <iostream>
#include <typeinfo>
#include "cml.h"

using namespace std;

     /*************/
    /*   MODOS   */
   /*************/

    /**
     * 0) sin funciones extra, solo monomios
     **/

std::vector<std::function<double(double)>> CML::fn_init(int grado, uint mode)
{
    std::vector<std::function<double(double)>> F;

    for (uint i = 0; i <= grado; i++)
        F.push_back(
            [&](double x){ return pow(x, i); }
        );

    switch (mode)
    {
    case 0:
        return F;
    default:
        exit(1);
    }
}

Vector CML::_fit(Vector x, Vector y)
{
    uint m = x.size();
    uint n = this->F.size();

    MatrixXd A = Matrix(m, n);

    for (uint i = 0; i < m; i++)
        for (uint j = 0; j < n; j++)
            A(i, j) = this->F[j](x[i]);

    Matrix AtA = A.transpose() * A;
    Vector Atb = A.transpose() * y;

    return AtA.lu().solve(Atb);
}

double CML::_predict(double x)
{
    double y = 0;

    for (uint i = 0; i < F.size(); i++)
        y += F[i](x);

    return y;
}
