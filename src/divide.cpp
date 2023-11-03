#include "../include/divide.h"

Divide::Divide(const Expression & first, const Expression & second)
    : Operation(first, second)
{
}

Complex Divide::calculate(Complex & first, Complex & second) const
{
    return first / second;
}

std::string Divide::to_string() const
{
    return "/";
}

Expression * Divide::clone() const
{
    return new Divide(*this);
}

Divide operator/(const Expression & first, const Expression & second)
{
    return Divide(first, second);
}
