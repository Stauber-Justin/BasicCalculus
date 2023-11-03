#include "Root.h"

double ExtractRoot(float radicant, int degree)
{
    if (degree == 2)
    {
        return ExtractSquare(radicant);
    }
    else
        return 0;
}

double ExtractSquare(float rad)
{
    // float x = Root'rad'
    float x = 1.5f;
    float xQ = x * x;
    float fX = xQ - rad;
    float fXD = 2 * x;

    for (int i = 0; i < 50; i++)
    {
        xQ = x * x;
        fX = xQ - rad;
        fXD = 2 * x;
        x = x - fX / fXD;
    }
    return x;

    // Root'rad' should == 0
    //  int x = R'rad' | ²
    //  x²= rad
    //  x²- rad = 0
    //  f(x) = x²- rad
    //  f'(x) = 2x
    //  x1 = (start value)
    //  start value == number near R'rad' (guess it)
    //  1²=1 < Root'2' < 2²=4
    //  Root'1' < Root'2' < Root'4'
    //  1 < Root'2' < 2

    // Newton
    // X'itr+1 = X'itr + f(X'itr) / f'(X'itr)

    // itr1(x) = 1,5(start) - f(1,5) / f'(1,5)
    // itr1(x) = 1,5 - 0,25 / 3 = 1,416'
    // itr2(x) = 1,416'
    // itr3(x) = 1,416' - f(1,416') / f'(1,416')
    // itr3(x) = 1,14142156862
    // ...
}