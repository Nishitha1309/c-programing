#include<stdio.h>
main()
{
	int n,x,a,s=0;
	scanf("%d",&n);
	while(n>0)
	{
		x=n%10;
		n=n/10;  
		s=s*10+x;
	}
	printf("%d",s);
}
