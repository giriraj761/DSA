#include<stdio.h>
int main()
{
	float r,a;
	printf("Enter the radius of a circle: ");
	scanf("%f",&r);
	a=3.141592653*r*r;
	printf("\n\nArea of the circle is : %0.4f\n",a);
}
