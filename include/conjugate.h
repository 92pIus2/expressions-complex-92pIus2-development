#pragma once

#include "expression.h"

struct Conjugate : Expression
{
    Conjugate(const Expression &);

    Conjugate(const std::shared_ptr<Expression> &);

    Complex eval(std::map<std::string, Complex> const & values = {}) const override;

    std::string str() const override;

    Expression * clone() const override;

protected:
    const std::shared_ptr<Expression> term;
};

Conjugate operator~(const Expression &);
