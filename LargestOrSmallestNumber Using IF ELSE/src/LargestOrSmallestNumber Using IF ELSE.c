/*
 ============================================================================
 Name        : LargestOrSmallestNumber.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A,B;
		setbuf(stdout,NULL);
		printf("Enter 2 Numbers");
		scanf("%d%d",&A,&B);
		if (A>B){
			printf(" Largest Number is :%d\n Smallest Number is :%d",A,B);
		}
		else{
			printf(" Smallest Number is :%d\n Largest Number is :%d",A,B);
		}
	return EXIT_SUCCESS;
}
