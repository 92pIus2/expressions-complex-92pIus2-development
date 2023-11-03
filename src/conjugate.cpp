#include "../include/conjugate.h"

Conjugate::Conjugate(const Expression & term)
    : term(term.clone())
{
}

Conjugate::Conjugate(const std::shared_ptr<Expression> & term)
    : term(term)
{
}

Complex Conjugate::eval(std::map<std::string, Complex> const & values) const
{
    return ~term->eval(values);
}

std::string Conjugate::str() const
{
    return "~(" + term->str() + ")";
}

Expression * Conjugate::clone() const
{
    return new Conjugate(*this);
}

Conjugate operator~(const Expression & term)
{
    return Conjugate(term);
}
