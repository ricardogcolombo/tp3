#include <algorithm>
#include <numeric>
//#include <chrono>
#include <iostream>
#include "cml.h"
#include <typeinfo>

using namespace std;


CML::CML()
{}

void CML::fit(SparseMatrix X, Matrix y)
{}


Vector CML::predict(SparseMatrix X)
{
    // Creamos vector columna a devolver
    auto ret = Vector(X.rows());

    return ret;
}

