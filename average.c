#include<stdio.h>
//program to find average of n numbers
int main()
{
	int n,a;
	float avg;
	printf("enter the no of numbers to get average----");
	scanf("%d",&n);
	for(int i=1;i<=n ;i++)
	{
		printf("enter the number----");
		scanf("%d",&a);
		printf("\n");
		avg=a+avg;
	}
	avg=avg/n ;
	printf("average of numbers is ---%f",avg);
	return 0;
}