/*
 ============================================================================
 Name        : swapping2noUsingMul&Div.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x=6,y=4;
		x=x*y;
		y=x/y;
		x=x/y;
		printf(" x:%d\n y:%d\n",x,y);
	return EXIT_SUCCESS;
}
