#pragma once

#include "abstract_expression.h"

struct Negate : Expression
{
    Negate(const Expression &);

    Negate(const std::shared_ptr<Expression> &);

    Complex eval(std::map<std::string, Complex> const & values = {}) const override;

    std::string str() const override;

    Expression * clone() const override;

protected:
    const std::shared_ptr<Expression> term;
};

Negate operator-(const Expression &);
