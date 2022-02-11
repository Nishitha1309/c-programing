#include<stdio.h>
void swap(int*,int*);
int main(void)
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("the values before swapping %d%d",x,y);
	swap(&x,&y);
	printf("\n the values after swapping %d%d",x,y);
	return 0;
}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
