// To develop a program for implementation of power function and determine
// that complexity should be O(log n)
#include <iostream>
#include <cmath> 

double power(double x, int n)
{
    if (n == 0)
    {
        return 1.0;
    }
    else if (n % 2 == 0)
    {
        double temp = power(x, n / 2);
        return temp * temp;
    }
    else
    {
        double temp = power(x, (n - 1) / 2);
        return x * temp * temp;
    }
}

int main()
{
    std::cout << "Ayush Sharan Gaur\n";
    std::cout << "21BCS3240\n";
    double base = 2.0;
    int exponent = 10;
    double result = power(base, exponent);
    std::cout << base << "^" << exponent << " = " << result << std::endl;
    return 0;
}
