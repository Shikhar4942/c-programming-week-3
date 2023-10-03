#include<stdio.h>
int main()
{
	int a=0,b=1,n,i;
	printf("enter the term upto which you want the series");
	scanf("%d",&n);
	printf("01");
	for(i=0;i<n-2;i++)
	{
		a=b+a;
		printf("%d",a);
	}
}
