#include "../include/operation.h"

Operation::Operation(const Expression & first, const Expression & second)
    : first(first.clone())
    , second(second.clone())
{
}

Complex Operation::eval(std::map<std::string, Complex> const & values) const
{
    Complex first_term = first->eval(values), second_term = second->eval(values);
    return calculate(first_term, second_term);
}

std::string Operation::str() const
{
    return "(" + first->str() + " " + this->to_string() + " " + second->str() + ")";
}
