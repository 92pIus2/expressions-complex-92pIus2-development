#pragma once

#include "operation.h"

struct Add : Operation
{
    Add(const Expression &, const Expression &);

    Complex calculate(Complex &, Complex &) const override;

    std::string to_string() const override;

    Expression * clone() const override;
};

Add operator+(const Expression &, const Expression &);