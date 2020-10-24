/*
 ============================================================================
 Name        : Swapping2BumUsing(BITWISE).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=6,b=4;
	a = a^b;  /*2=6^4*/
	b = a^b;  /*6=2^4*/
	a = a^b;  /*4=2^6*/
	printf(" a:%d\n b:%d",a,b);
	return EXIT_SUCCESS;
}
