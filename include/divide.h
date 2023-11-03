#pragma once

#include "operation.h"

struct Divide : Operation
{
    Divide(const Expression &, const Expression &);

    Complex calculate(Complex &, Complex &) const override;

    std::string to_string() const override;

    Expression * clone() const override;
};

Divide operator/(const Expression &, const Expression &);
