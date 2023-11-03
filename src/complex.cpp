#include "../include/complex.h"

#include <cmath>
#include <sstream>

double Complex::real() const
{
    return re;
}

double Complex::imag() const
{
    return im;
}

double Complex::abs() const
{
    return hypot(re, im);
}

std::string Complex::str() const
{
    std::ostringstream out;
    out << "(" << re << "," << im << ")";
    return out.str();
}
bool Complex::operator!=(const Complex & c) const
{
    if (re != c.re || im != c.im)
        return true;
    return false;
}

bool Complex::operator==(const Complex & c) const
{
    if (re == c.re && im == c.im)
        return true;
    return false;
}

Complex Complex::operator~() const
{
    return Complex(re, -im);
}
Complex Complex::operator-() const
{
    return Complex(-re, -im);
}

std::ostream & operator<<(std::ostream & out, const Complex & c)
{
    out << c.str();
    return out;
}

const Complex & Complex::operator+=(const Complex & c)
{
    re += c.re;
    im += c.im;
    return *this;
}

const Complex & Complex::operator-=(const Complex & c)
{
    re -= c.re;
    im -= c.im;
    return *this;
}

const Complex & Complex::operator*=(const Complex & c)
{
    *this = *this * c;
    return *this;
}

const Complex & Complex::operator/=(const Complex & c)
{
    *this = *this / c;
    return *this;
}

Complex operator+(const Complex & first, const Complex & second)
{
    return Complex(first.re + second.re, first.im + second.im);
}

Complex operator-(const Complex & first, const Complex & second)
{
    return Complex(first.re - second.re, first.im - second.im);
}

Complex operator*(const Complex & first, const Complex & second)
{
    return Complex(first.re * second.re - first.im * second.im, first.re * second.im + second.re * first.im);
}

Complex operator/(const Complex & first, const Complex & second)
{
    double k = second.re * second.re + second.im * second.im;
    if (k == 0) {
        double real;
        double imag;
        int sign_real = 0, sign_imag = 0;
        if (first.re > 0) {
            sign_real = 1;
        }
        if (first.re < 0) {
            sign_real = -1;
        }
        if (first.im > 0) {
            sign_imag = 1;
        }
        if (first.im < 0) {
            sign_imag = -1;
        }
        real = std::numeric_limits<double>::infinity() * sign_real;
        imag = std::numeric_limits<double>::infinity() * sign_imag;
        return Complex(real, imag);
    }
    return Complex((first.re * second.re + first.im * second.im) / k, (first.im * second.re - second.im * first.re) / k);
}
Complex::Complex()
{
}
Complex::Complex(double real, double imag)
    : re(real)
    , im(imag)
{
}
Complex::Complex(double real)
    : re(real)
{
}