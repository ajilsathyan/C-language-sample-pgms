/*
 ============================================================================
 Name        : String.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[40];
	setbuf(stdout,NULL);

	printf("Enter a name ");
	scanf("%s",name);

	printf("Entered name is %s",name);


	return EXIT_SUCCESS;
}
