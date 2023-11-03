#pragma once

#include "operation.h"

struct Subtract : Operation
{
    Subtract(const Expression &, const Expression &);

    Complex calculate(Complex &, Complex &) const override;

    std::string to_string() const override;

    Expression * clone() const override;
};

Subtract operator-(const Expression &, const Expression &);
