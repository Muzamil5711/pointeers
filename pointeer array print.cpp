#include<stdio.h>
# define n 5
main()
{
	//int n=5;
	int array[n];
	for(int i=0;i<n;i++){
		scanf("%d",&array[i]);
		
	}
	int *arr[n];

	for(int j=0;j<n;j++){
			arr[j]=&array[j];
			
		printf("%d",*arr[j]);
	}
}
