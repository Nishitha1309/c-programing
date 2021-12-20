#include<stdio.h>
main()
{
	int i;
	int n=1;
	int mult;
	scanf("%d",&i);
	while(n<=10)
	{
		mult=(i*n);
		printf("%d\n",mult);
		n++;
	}
}
