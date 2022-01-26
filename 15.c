// cordinates of the points A(2, 2) and B(5, 6)..

#include <stdio.h>
#include <math.h>
# define PI 3.14

int main()
{
    float x, y, x1=2, x2=5, y1=2, y2=6, diameter, area;
    x = pow(x2-x1, 2);
    y = pow(y2-y1, 2);
    diameter = (x+y);
    area = PI * (pow(diameter/2, 2));
    printf("Required Area of the circle: %0.2f units sq.\n", area);

    return 0;
}