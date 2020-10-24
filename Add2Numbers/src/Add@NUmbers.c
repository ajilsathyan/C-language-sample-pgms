/*
 ============================================================================
 Name        : fh.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	setbuf(stdout,NULL);
	puts("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("Result is %d",c);
	return EXIT_SUCCESS;
}
