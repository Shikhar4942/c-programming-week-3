#include<stdio.h>
#include<math.h>
int main()
{
	int a,i=0,b,c=0;
	printf("enter no you want to convert to binary");
	scanf("%d",&a);
while(a>0)
{
	b=a%2;
	c=c+b*pow(10,i);
	i++;
	a=a/2;
}
printf("%d",c);
}
