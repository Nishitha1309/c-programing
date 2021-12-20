#include<stdio.h>
main()
{
	int i=0;
	int sum=0;
	int n;
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=(i*i);
		i++;
	}
	printf("%d",sum);
}
