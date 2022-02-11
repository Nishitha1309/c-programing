#include<stdio.h>
int sum(int a,int b)
{
	printf("this is returning a value");
	return a+b;
}
int main(void)
{
	printf("hrllo world\n");
	printf("\n value returned from function is %d",sum(45,56));
	return 0;
}
