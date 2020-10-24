/*
 ============================================================================
 Name        : BiggestAmongThreeNumbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c,d;
	setbuf(stdout,NULL);
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	d=(a>b)&&(a<c)?a:(b>a)&&(b>c)?b:c;
	printf("Biggest Number is %d",d);
	return EXIT_SUCCESS;

}
