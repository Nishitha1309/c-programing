#include<stdio.h>
int x=20;
void f1();
int main()
{
	int b=56;
	printf("%d",b);
	f1();
	f1();
	f1();
}
void f1()
{
	int x=20;
	printf("%d",x);
	x++;
}
