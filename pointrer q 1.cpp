#include<stdio.h>
main ()
{
	int x=5;
	int *p;
	int *t;
	int **pp;
	int ***p2;
	p=&x;
	t=p;
	pp=&p;
	p2=&pp;
	printf("%p , %p , %p ,%p ,",&x,p,&p,pp);
	*t=3;
	printf("%p , %p ,%p ,%p ,%p ,%p ,%p ,",*p,*t,*pp,**pp,*p2,**p2,***p2);
	
	
	
	 

}
