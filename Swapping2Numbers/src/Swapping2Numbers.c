/*
 ============================================================================
 Name        : Swapping2Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A=30,B=40,Temp;

    Temp=A;
    A=B;
    B=Temp;
    printf("A:%d  B:%d",A,B);
	return EXIT_SUCCESS;
}
