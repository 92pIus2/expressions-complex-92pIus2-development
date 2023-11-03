#pragma once

#include "operation.h"

struct Multiply : Operation
{
    Multiply(const Expression &, const Expression &);

    Complex calculate(Complex &, Complex &) const override;

    std::string to_string() const override;

    Expression * clone() const override;
};

Multiply operator*(const Expression &, const Expression &);
