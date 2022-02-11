#include<stdio.h>
int max(int a,int b);
int main(void)
{
	printf("hellow world\n");
	int x,y;
	scanf("%d%d",&x,&y);
	printf("the maximum value is %d",max(x,y));
	return 0;
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
