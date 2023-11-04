#include<stdio.h>
int main()
{
	int a=0,b=1,n,i,c;
	printf("enter the term upto which you want the series");
	scanf("%d",&n);
	printf("01");
	c=a+b;
	for(i=0;i<n-2;i++)
	{
		printf("%d",c);
		a=b;
		b=c;
		c=a+b;
		
	}
}
