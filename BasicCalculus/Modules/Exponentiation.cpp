#include "Exponentiation.h"

double Exponentiation(double base, double power)
{
    double result = 1.0f;

    for (int i = 0; i < power; i++)
    {
        result = result * base;
    }

    return result;
}