/*
 ============================================================================
 Name        : average.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,average;
	setbuf(stdout,NULL);

	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	average=(a+b)/2;
	printf("Average is %d ",average);
	return EXIT_SUCCESS;
}
