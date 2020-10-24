/*
 ============================================================================
 Name        : SUMOFArrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,values[100],sum=0;
	setbuf(stdout,NULL);

	printf("Enter limit");
	scanf("%d",&limit);

	printf("Enter Values");
	for(i=0;i<limit;i++){/*Arranging Array space for limit,if limit is 3, It will arrange 3 spaces in Array*/
	 scanf("%d",&values[i]);/* Values are storing from user*/
	}

	for(i=0;i<limit;i++){
		sum=sum+values[i];

	}
	printf(" Result is :%d",sum);

	return EXIT_SUCCESS;
}
