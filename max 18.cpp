#include<stdio.h>
void calu(int,int);
int main(void)
{
	int a,b;
	scanf("%d%d,&a,&b");
	calu(a,b);
	return 0;
}
void calu(int x,int y)
{
	if(x>y)
	{
		printf("%d is max",x);
		printf("%d is min",y);
	}
	else if(x<y)
	{
		printf("%d is max",y);
		printf("%d is min",x);
	}
}
