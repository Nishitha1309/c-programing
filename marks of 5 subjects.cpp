#include<stdio.h>
main()
{
	int a,b,c,d,e;
	int x;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	x=((a+b+c+d+e)/500)*100;
	if (x>90)
	{
		printf("A");
	}
	else if(x>80)
	{
		printf("B");
	}
	else if(x>70)
	{
		printf("C");
	}
	else if(x>40)
	{
		printf("D");
	}
	else if(x<40)
	{
		printf("E");
	}
}
