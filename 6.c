// program to print current system date..

#include<stdio.h>
#include<time.h>

int main()
{
    time_t t;
    time(&t);

    printf("\nDate and Time: %s", ctime(&t));

    return 0;
}