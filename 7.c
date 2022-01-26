// Given two integers 20 and 10, write a program that uses a
// function add() to add these two numbers and sub() to find the
// difference of these two numbers and then display the sum and
// difference in the following form:
// 20 + 10 =30
// 20 - 10 = 10

#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);

int main()
{
    int addition, difference;
    addition = add(20, 10);
    difference = sub(20, 10);

    printf("20 + 10 = %d\n", addition);
    printf("20 - 10 = %d\n", difference);

    return 0;
}

int add(int a, int b)
{
    return (a+b);
}

int sub(int a, int b)
{
    return (a-b);
}