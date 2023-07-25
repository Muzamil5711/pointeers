#include<stdio.h>
main()

{
	int p =3;
	int t =4;
	int *tp=&p;
	int *pt=&t;
	printf("%d",(*tp)+(*pt));
}
