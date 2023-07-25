#include<stdio.h>
main ()
{
	int num1,num2;
	int *add;
	scanf("%d %d",&num1,&num2);
	int a= num1+num2;
	add=&a;
	printf("%d",*add);
}
