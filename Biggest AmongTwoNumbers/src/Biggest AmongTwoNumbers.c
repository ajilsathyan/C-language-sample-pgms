/*
 ============================================================================
 Name        : Biggest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A,B,D;
	setbuf(stdout,NULL);
	printf("Enter 2 Numbers");
	scanf("%d%d",&A,&B);
	D=(A>B)?A:B;
	printf("Biggest Number is %d",D);
	return EXIT_SUCCESS;
}
