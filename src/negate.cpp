#include "../include/negate.h"

Negate::Negate(const Expression & term)
    : term(term.clone())
{
}

Negate::Negate(const std::shared_ptr<Expression> & term)
    : term(term)
{
}

Complex Negate::eval(std::map<std::string, Complex> const & values) const
{
    return -term->eval(values);
}

std::string Negate::str() const
{
    return "-(" + term->str() + ")";
}

Expression * Negate::clone() const
{
    return new Negate(*this);
}

Negate operator-(const Expression & term)
{
    return Negate(term);
}
