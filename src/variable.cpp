#include "../include/variable.h"

Variable::Variable(std::string name)
    : name(std::move(name))
{
}

Complex Variable::eval(std::map<std::string, Complex> const & values) const
{
    return values.at(name);
}

std::string Variable::str() const
{
    return name;
}

Expression * Variable::clone() const
{
    return new Variable(*this);
}