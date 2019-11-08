#include <algorithm>
#include <numeric>
//#include <chrono>
#include <iostream>
#include "cml.h"
#include <typeinfo>

using namespace std;

CML::CML(const std::function<Vector(double)> &func,int size) {

    this->f = func;
    this->size = size;
}

void CML::fit(Vector x,Vector y)
{
    MatrixXd A = Matrix(this->size,this->size);

    for(int i =0;i<y.size();i++){
        A.row(i)=this->f(x[i]);
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
