#include<stdio.h>
main()
{
	int i,n,f;
	f=i=1;
	scanf("%d",&n);
	while(i<=n)
	{
		f*=i;
		i++;
    }
    printf("%d",f);
}
