/*
 ============================================================================
 Name        : MulOfArrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,values[100],Mul=0;
	setbuf(stdout,NULL);

    printf("Enter Limit");
    scanf("%d",&limit);

    printf("Enter Values");
    for(i=0;i<limit;i++){
    	scanf("%d",&values[i]);
    }

    for(i=0;i<limit;i++){
    	scanf("%d",&values[i]);

    	Mul=Mul*values[i];
    }

    printf("Total Multiplication Result is :%d",Mul);

	return EXIT_SUCCESS;
}
