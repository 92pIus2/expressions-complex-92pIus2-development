# Complex Numbers

I implemented an immutable complex number class that provides the following operations:

- Construction without arguments
- Construction from a real part
- Construction from real and imaginary parts
- Real part: `double real()`
- Imaginary part: `double imag()`
- Absolute value: `double abs()`
- Conversion to a string: `std::string str()`
- Addition: `+`, `+=`
- Subtraction: `-`, `-=`
- Multiplication: `*`, `*=`
- Division: `/`, `/=`
- Unary minus: `-`
- Complex conjugate: `~`
- Equality comparison: `==`, `!=`
- Output to a stream: `<<`


# Arithmetic Expressions
Types of expressions:

- `Const` (takes a value in the constructor)
- `Variable` (takes a variable name in the constructor)
- `Negate` (unary minus)
- `Add` (addition)
- `Subtract` (subtraction)
- `Multiply` (multiplication)
- `Divide` (division)

All these classes should (not necessarily directly) inherit from `Expression`.

Example of constructing the expression `2 * x + 1`:

```cpp
const Add expr(Multiply(Const(2), Variable("x")), Const(1));
```

Arithmetic operators should be implemented for expressions. Thus, the previous example could be written as follows:

```cpp
const Add expr = Const(2) * Variable("x") + Const(1);
```

The `eval` method takes a mapping from variable names to their values as an argument and returns the result of the expression, using the provided values instead of the variables.

```cpp
const Complex result = expr.eval({
    {"x", Complex(100)}
    {"y", Complex(42)}
}); // 201
```

The `clone` method should return a pointer to an expression equivalent to the one it is called on, but ownership of the pointer belongs to the caller.

The `Expression` class should have an output operator.
