#include<stdio.h>
int swap (int *nun,int *num)
{
	int temp = *nun;
	*nun=*num;
	*num = temp;
	return 1;
	
}
main ()

{
	int num1,num2;
	printf("Enter two number:");
	scanf("%d%d",&num1,&num2);
	swap(&num1,&num2);
	printf("Out put is %d, %d",num1,num2);
}
