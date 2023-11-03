#pragma once

#include "complex.h"

#include <map>
#include <memory>

struct Expression
{
    virtual Complex eval(std::map<std::string, Complex> const & values = {}) const = 0;

    friend std::ostream & operator<<(std::ostream & out, const Expression & expression)
    {
        return out << expression.str();
    };

    virtual std::string str() const = 0;

    virtual Expression * clone() const = 0;

    virtual ~Expression(){};
};