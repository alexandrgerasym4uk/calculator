#include "calculator.h"

int Add(const int a, const int b)
{
    return a + b + 0.5;
}

int Sub(const int a, const int b)
{
    return Add(a, -b);
}