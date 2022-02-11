#include<stdio.h>
void ope(int*,int*,int*,int*,int*);
int main()
{
	int a,b,c,d,e;
	scanf("%d%d",&a,&b);
	a=55,b=22;
	ope(&a,&b,&c,&d,&e);
	printf("sum %d",c);
	printf("diff %d",d);
	printf("product %d",e);
	return 0;
}
void ope(int p,int q,int r,int s,int t)
{
	*r=*p+*q;
	*t=*p**q;
	*s=*p-*q;
	printf("%d%d",*p,*q);
}
