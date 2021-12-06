#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter first no");
	scanf("%d",&a);
	printf("enter second no");
	scanf("%d",&b);
	c=a,a=b,b=c;
	printf("\n%d \n%d",a,b);
}
