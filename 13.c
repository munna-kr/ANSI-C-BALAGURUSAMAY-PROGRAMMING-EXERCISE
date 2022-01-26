// distance between two points  is A(x1, y1) and B(x2, y2) is goverened by:
// formula: D^2 = (x2 -x1)^2 + (y2-y1)^2

#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, x1, x2, y1, y2, d;

    printf("Enter the cordinates of the point A:\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter the cordinates of the point B:\n");
    scanf("%f %f", &x2, &y2);
    x = pow(x2-x1, 2);
    y = pow(y2-y1, 2);
    d = (x+y);
    
    printf("-------------\n");
    printf("Distance between points A and B: %0.2f units.", sqrt(d));

    return 0;
}