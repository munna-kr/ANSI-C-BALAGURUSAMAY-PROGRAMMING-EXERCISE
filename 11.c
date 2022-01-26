// Program to find Area of a triangle using heron's formula:
// area = {s(s-a)(s-b)(s-c)}
// 2s = a + b + c

#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, s, area;
	printf("Enter the sides of triangle:\n");
	scanf("%f %f %f", &a, &b, &c);
	s = (a+b+c)/2;
	area = (s*(s-a)*(s-b)*(s-c));
	printf("Area of trianle = %f units sq.\n", sqrt(area));

	return 0;
}
