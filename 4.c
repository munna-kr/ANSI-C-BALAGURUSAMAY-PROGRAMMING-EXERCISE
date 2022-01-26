// Equation: x = a/b-c
// (a) a = 250, b = 85, c = 25
// (b) a = 300, b = 70, c =70

#include <stdio.h>

int main()
{
    float a = 250, b = 85, c = 25;
    float x;
    x = a / (b-c);
    printf("when a = %0.0f, b = %0.0f, c = %0.0f.\n\
Then, x = a/b-c = %f\n", a, b, c, x);
    return 0;
}

// for (b) just change the value of a, b, and c
// Inf means infinity, and is the result of dividing
// a positive number by zero -- e.g., 1/0 → inf.