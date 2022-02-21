#include<stdio.h>
struct traveller
{
	char name[10],class_no[10],coach_no[10];
	int age,train_no,seat_no;
};
main()
{
	struct traveller a;
	scanf("%s%s%s",&a.name,&a.class_no,&a.coach_no);
	scanf("%d%d%d",&a.age,&a.train_no,&a.seat_no);
	printf("traveller details are\n");
	printf("name is %s \nclass_no is %s \ncoach_no is %s",a.name,a.coach_no,a.class_no);
	printf("\nage is %d \ntrain_no is %d \nseat_no is %d",a.age,a.train_no,a.seat_no);
}

