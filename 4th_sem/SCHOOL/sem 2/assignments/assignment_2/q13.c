#include<stdio.h>
#include<math.h>
int main()
{
	int km;
	float m;
	printf("Enter the meter: ");
	scanf("%f",&m);
	km=m/1000;
	m-=km*1000;
	printf("The distance is %d Kilometers and %0.2f meters.\n",km,m);
}

