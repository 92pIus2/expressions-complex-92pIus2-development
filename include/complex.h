#pragma once
#include <istream>
class Complex
{
private:
    double re = 0, im = 0;

public:
    Complex();
    Complex(double, double);
    Complex(double);
    double real() const;
    double imag() const;
    double abs() const;
    std::string str() const;
    Complex operator-() const;
    Complex operator~() const;
    friend Complex operator+(const Complex &, const Complex &);
    friend Complex operator-(const Complex &, const Complex &);
    friend Complex operator*(const Complex &, const Complex &);
    friend Complex operator/(const Complex &, const Complex &);
    const Complex & operator+=(const Complex &);
    const Complex & operator-=(const Complex &);
    const Complex & operator*=(const Complex &);
    const Complex & operator/=(const Complex &);
    friend std::ostream & operator<<(std::ostream &, const Complex &);
    bool operator==(const Complex & c) const;
    bool operator!=(const Complex & c) const;
};
