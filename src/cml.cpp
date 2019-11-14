#include <algorithm>
#include <numeric>
#include <iostream>
#include "cml.h"
#include <typeinfo>

using namespace std;

Vector CML::_fit(Vector x, Vector y)
{
    uint m = this->size;
    uint n = x.size();

    MatrixXd A = Matrix(n, m);

    for (uint i = 0; i < n; i++) {
        auto fxi = this->F(x[i]);
        for (uint j = 0; j < m; j++)
            A(i, j) = fxi[j];
    }


    Matrix AtA = A.transpose() * A;
    Vector Atb = A.transpose() * y;

    return AtA.lu().solve(Atb);
}


double CML::_predict(double x)
{
    return this->F(x).transpose() * this->a;
}
