#pragma once

#include "abstract_expression.h"

struct Operation : Expression
{
    Operation(const Expression &, const Expression &);

    Complex eval(std::map<std::string, Complex> const & values = {}) const override;

    virtual Complex calculate(Complex &, Complex &) const = 0;

    std::string str() const override;

    virtual std::string to_string() const = 0;

protected:
    const std::shared_ptr<Expression> first, second;
};
