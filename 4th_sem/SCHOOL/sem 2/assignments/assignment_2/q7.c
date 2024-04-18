#include<stdio.h>
int main()
{
	int s,m,h;
	printf("Enter the time in secs: ");
	scanf("%d",&s);
	h=s/3600;
	s=s%3600;
	m=s/60;
	s%=60;
	printf("Time is %d hours %d minutes and %d secs\n",h,m,s);
}
