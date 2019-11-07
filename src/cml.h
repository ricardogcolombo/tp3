#pragma once

#include "types.h"


class CML {
public:
    CML();

    Vector fit(Matrix A, Vector b);
};
