#include "../include/multiply.h"

Multiply::Multiply(const Expression & first, const Expression & second)
    : Operation(first, second)
{
}

Complex Multiply::calculate(Complex & first, Complex & second) const
{
    return first * second;
}

std::string Multiply::to_string() const
{
    return "*";
}

Expression * Multiply::clone() const
{
    return new Multiply(*this);
}

Multiply operator*(const Expression & first, const Expression & second)
{
    return Multiply(first, second);
}