// Area of circle = (pi*r^2)
// Circumference of circle = (2*pi*r)
// when cordinates of a point on circumference and center are given.
// if the cordinates of center is O(x1, y2) and point is A(x2, y2)
// then, using distance formula: radius = sqrt((x2 -x1)^2 + (y2-y1)^2))
// Given cordinates are O(0,0) and A(4,5).

#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
    float x, y, x1=0, x2=4, y1=0, y2=5, r, area, circumference;

    // when we want to take input from user, just remove the
    // value of cordinates from declaration part and uncomment input section.
    
    // printf("Enter the cordinates of the point A:\n");
    // scanf("%f %f", &x1, &y1);
    // printf("Enter the cordinates of the center O:\n");
    // scanf("%f %f", &x2, &y2);

    x = pow(x2-x1, 2);
    y = pow(y2-y1, 2);
    r = (x+y);
    area = PI*(pow(r, 2));
    circumference = (2*PI*r);

    printf("-------------\n");
    printf("Area of the Circle: %0.2f units sq.\n", area);
    printf("Circumference of the Circle: %0.2f units.\n", circumference);

    return 0;
}