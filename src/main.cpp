#include "../include/expression.h"

#include <iostream>

int main()
{
    Add sum(Const(5), Const(3));

    for (int i = 0; i < 10; ++i) {
        std::cout << "1 + " << i << " = " << sum.eval() << std::endl;
    }
    return 0;
}
