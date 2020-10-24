/*
 ============================================================================
 Name        : NegativeOrPositive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	setbuf(stdout,NULL);
	printf("Enter a number");
	scanf("%d",&num);
	if (num>0){
		printf("You Have Entered a Positive Number :%d",num);
	}
	else{
		printf("You Have Entered a Negative Number :%d",num);
	}
	return EXIT_SUCCESS;
}
