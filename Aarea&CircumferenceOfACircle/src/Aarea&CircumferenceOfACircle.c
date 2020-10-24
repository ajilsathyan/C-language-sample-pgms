/*
 ============================================================================
 Name        : Aarea&CircumferenceOfACircle.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
# define pi 3.34
int main(void) {
	int r;
		float ar,cr;
		setbuf(stdout,NULL);
		printf("Enter the radius");
		scanf("%d",&r);
		ar=pi*r*r;
		cr=2*pi*r;
		printf("Area is %f\n",ar);
		printf("Circumference is %f\n",cr);
	return EXIT_SUCCESS;
}
