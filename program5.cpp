#include<stdio.h>
int main()
{
	int s=0,n,i;
	printf("enter any no n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	s=s+i;
	printf("%d is sum of first %d natural no.s",s,n);
	return 0;
	
	
}
