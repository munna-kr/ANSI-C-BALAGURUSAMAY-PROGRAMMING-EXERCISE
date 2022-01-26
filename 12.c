// Program to find Sum and Difference of two numbers

#include <stdio.h>

int main()
{
    int x, y, sum, difference;
    printf("Enter the value of x: \n");
    scanf("%d", &x);
    printf("Enter the value of y: \n");
    scanf("%d", &y);

    printf("-----------\n");
    printf("Sum = %d\n", x+y);
    printf("Difference = %d\n", x-y);

    return 0;
}