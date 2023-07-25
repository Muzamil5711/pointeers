#include<stdio.h>
void message(){
	printf("This function is call without using name");
}
main()
{
	void (*funptr)()=&message;
	(*funptr)();
}
