#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a<=0)
	{
		printf("freezing weather");
	}
	else if(a<=10)
	{
		printf("very cold weather");
	}
	else if(a<=30)
	{
		printf("normal in temp");
	}
	else if(a<40)
	{
		printf("its hot");
	}
	else if(a>=40)
	{
		printf("its very hot");
	}
}
