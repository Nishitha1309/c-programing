#include<stdio.h>
main()
{
	int x,a,b,c;
	scanf("%d %d %d %d",&a,&b,&c,&x);
	x=(a^2-6*(b*c));
	if(x=0)
	{
		printf("equal");
	}
	else if(x>0)
	{
		printf("real");
	}
	else
	{
		printf("imaginary");
	}
}
