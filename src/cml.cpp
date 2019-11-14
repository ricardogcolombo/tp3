#include <algorithm>
#include <numeric>
//#include <chrono>
#include <iostream>
#include "cml.h"
#include <typeinfo>

using namespace std;

CML::CML(const std::function<Vector(double)> &func, int size)
{
    this->f = func;
    this->size = size;
}

void CML::fit(Vector x, Vector y)
{
    uint m = this->size;
    uint n = x.size();

    MatrixXd A = Matrix(n, m);

    for (uint i = 0; i < n; i++) {
        auto fxi = this->f(x[i]);
        for (uint j = 0; j < m; j++) {
            A(i, j) = fxi[j];
            cout << A(i,j) << endl;
        }
    }

    Vector b = Vector(y);
    this->ata=A.transpose()*A;
    this->atb = A.transpose()*b;
    Vector res = this->ata.lu().solve(this->atb);
    this->pred = res;
}
Vector CML::appF(int a){
    return this->f(a);
}
Matrix CML::getA(){
    return this->ata;
}

Vector CML::getB(){
    return this->atb;
}
double CML::predict(double a)
{
    Vector fa = this->f(a);
    double res = fa.transpose()*this->pred;
    return res;
}
