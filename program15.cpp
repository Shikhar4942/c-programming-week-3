#include<stdio.h>
#include<math.h>
int main()
{
		int a,b,c,d,f,e,i=0;
	scanf("%d",&a);
	c=a;
	while(a>0)
	{
		b=a%10;
		a=a/10;
		i++;
	}
while(c>0)
{
	d=c%10;
	f=c/(pow(10,i-1));
c=c/(pow(10,i));
	e=d+f;
}
printf("%d",e);

	return 0 ;
}

