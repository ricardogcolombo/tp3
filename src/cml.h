#pragma once

#include "types.h"


class CML {
public:
    CML();

    void fit(Matrix X, Vector b);

    Vector predict();
private:
    Matrix old;
};
