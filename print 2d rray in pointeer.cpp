#include<stdio.h>
#define row 4
#define col 4
main (){
	int array[row][col];
	for(int i=0;i<row;i++){
		for(int j=0; j<col;j++){
			scanf("%d",&array[i][j]);
		}
		printf("\n");
	}
	int *ptr=&array[0][0];
	for(int k=0;k<row;k++){
		for(int l=0;l<col;l++){
			printf("%d",*(ptr++));
		}
		printf("\n");
	}
}
