#include "../include/const.h"

Const::Const(Complex term)
    : term(term)
{
}

Complex Const::eval(std::map<std::string, Complex> const &) const
{
    return term;
}

std::string Const::str() const
{
    return term.str();
}

Expression * Const::clone() const
{
    return new Const(*this);
}