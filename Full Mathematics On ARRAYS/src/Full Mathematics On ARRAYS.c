/*
 ============================================================================
 Name        : Full.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int  i,limit,values[100],sum=0,mul=1,Sub;
	float div,Average;
	setbuf(stdout,NULL);

	printf("Enter Limit");
	scanf("%d",&limit);

	printf("Enter Values");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);
	}
	for(i=0;i<limit;i++){
		sum=sum+values[i];

	}
	printf("Sum is :%d\n",sum);

	for(i=0;i<limit;i++){
		mul=mul*values[i];

	}
	printf("Total multiplication is :%d\n",mul);

	for(i=0;i<limit;i++){
		Sub=500-values[i];

	}
	printf("Total Subtraction is :%d\n",Sub);

    for(i=0;i<limit;i++){
    	div=500/values[i];

    }
    printf("Total Division is :%f\n",div);

    for(i=0;i<limit;i++){
    	sum=sum+values[i];
    	Average=sum/limit;

    }
    printf("Total Average is :%f",Average);


	return EXIT_SUCCESS;
}
