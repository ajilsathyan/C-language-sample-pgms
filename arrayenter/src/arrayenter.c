/*
 ============================================================================
 Name        : arrayenter.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	        int a[5];
			int i;
			setbuf(stdout,NULL);
			printf("Enter the values");
			 for(i=0;i<5;i++){
				 scanf("%d",&a[i]);
			 }
			 printf("Entered Values are : ");
            for(i=0;i<5;i++){
             printf("%d\t",a[i]);
            }
	return EXIT_SUCCESS;
}
