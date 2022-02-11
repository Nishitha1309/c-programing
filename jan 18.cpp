#include<stdio.h>
int main()
{
	int n,a=0,s=0;
	scanf("%d",&n);
	calu(&n,&s,&a);
	printf("sum of num %d",s);
	printf("avg is %d",a);
}
void calu(int *n,int *sum,int *avg)
{
	int i,x;
	for(i=1;i<*n;i++)
	{
		scanf("%d",&x);
		*sum=*sum+x;
	}
	*avg=*sum/(*n);
}
