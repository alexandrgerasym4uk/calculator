#include <cstdio>
#include "calculator.h"

int main() {
    constexpr int a = 10;
    constexpr int b = 7;
    printf("Addition: %d + %d = %d\n", a, b, Add(a, b));
    printf("Subtraction: %d - %d = %d\n", a, b, Sub(a, b));
    return 0;
}