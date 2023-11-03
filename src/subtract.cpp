#include "../include/subtract.h"

Subtract::Subtract(const Expression & first, const Expression & second)
    : Operation(first, second)
{
}

Complex Subtract::calculate(Complex & first, Complex & second) const
{
    return first - second;
}

std::string Subtract::to_string() const
{
    return "-";
}

Expression * Subtract::clone() const
{
    return new Subtract(*this);
}

Subtract operator-(const Expression & first, const Expression & second)
{
    return Subtract(first, second);
}