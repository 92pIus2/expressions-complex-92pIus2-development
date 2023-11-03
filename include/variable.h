#pragma once

#include "expression.h"

struct Variable : Expression
{
    Variable(std::string var_name);

    Complex eval(std::map<std::string, Complex> const & values = {}) const override;

    std::string str() const override;

    Expression * clone() const override;

private:
    std::string name;
};