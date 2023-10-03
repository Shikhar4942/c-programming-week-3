#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i=0,c=0;
	printf("enter the binary no you want to convert to decimal");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		c=c+b*pow(2,i);
		i++;
		a=a/10;
	}
	printf("%d",c);
	return 0;
}
