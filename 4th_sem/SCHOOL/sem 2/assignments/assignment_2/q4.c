#include<stdio.h>
int main()
{
	float height,base,area;
	printf("Enter the height and base of the triangle: ");
	scanf("%f,%f",&height,&base);
	area=0.5*base*height;
	printf("\n\nArea of the triangle is : %0.3f sq units\n",area);
}	
