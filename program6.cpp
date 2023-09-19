#include<stdio.h>
int main()
{
	int i,a,f;
	printf("enter any natural no");
	scanf("%d",&a);
	f=a;
	for(i=1;i<a;i++)
	f=f*i;
	printf("factorial of %d is %d",a,f);
	return 0;
	
}
