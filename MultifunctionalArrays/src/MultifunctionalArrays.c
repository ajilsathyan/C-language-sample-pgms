/*
 ============================================================================
 Name        : MultifunctionalArrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,values[3][3];
		setbuf(stdout,NULL);

		printf("Enter values");
		for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				scanf("%d",&values[i][j]);
			}
		}

		printf("Entered Values are :\n");/* Avoid Repetition of "Entered values are==
		Entered values are :4	 Entered values are :4	 Entered values are :4
        Entered values are :4	 Entered values are :4	 Entered values are :4
        Entered values are :4	 Entered values are :4	 Entered values are :4	 " */
		for(i=0;i<3;i++){
				for(j=0;j<3;j++){
					printf("%d\t",values[i][j]);
				}
				printf("\n");
			}


	return EXIT_SUCCESS;
}
