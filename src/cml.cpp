#include <algorithm>
#include <numeric>
//#include <chrono>
#include <iostream>
#include "cml.h"
#include <typeinfo>

using namespace std;

CML::CML()
{}

Vector CML::fit(Matrix A, Vector b)
{
    Matrix ata = A.transpose()*A;
    Vector atb = A.transpose()*b;

    return ata.lu().solve(atb);
}
