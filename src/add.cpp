#include "../include/add.h"

Add::Add(const Expression & first, const Expression & second)
    : Operation(first, second)
{
}

Complex Add::calculate(Complex & first, Complex & second) const
{
    return first + second;
}

std::string Add::to_string() const
{
    return "+";
}

Expression * Add::clone() const
{
    return new Add(*this);
}

Add operator+(const Expression & first, const Expression & second)
{
    return Add(first, second);
}
