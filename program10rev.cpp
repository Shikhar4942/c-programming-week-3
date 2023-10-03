#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,d,e,i=0,f=0;

	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		a=a/10;
		i++;
	}
	printf("%d\n",i);
	while(d>0)
	{
		e=d%10;
		f=f+e*pow(10,i-1);
		d=d/10;
		i--;
	}
	printf("%d",f);
}
