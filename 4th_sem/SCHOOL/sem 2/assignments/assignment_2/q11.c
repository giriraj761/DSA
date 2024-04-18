#include<stdio.h>
#include<math.h>
int main()
{
	float side1,side2,side3,area;
	printf("\n\n\nEnter the sides of the triangle : ");
	scanf("%f,%f,%f",&side1,&side2,&side3);
	float as=(side1+side2+side3)/2;
	float s=as*(as-side1)*(as-side2)*(as-side3);
	area=sqrt(s);
	printf("the area of the triangle is :%0.6f",area);
	
}

