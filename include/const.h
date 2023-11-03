#pragma once

#include "expression.h"

struct Const : Expression
{
private:
    Complex term;

public:
    Const(Complex term);

    Complex eval(std::map<std::string, Complex> const & = {}) const override;

    std::string str() const override;

    Expression * clone() const override;
};