/*
 ============================================================================
 Name        : BasicMathematicsOperationsUsing.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,choice,result;
	setbuf(stdout,NULL);
	printf("Enter 2 Numbers");
	scanf("%f%f",&a,&b);
	printf(" 1 For Addiction\n 2 For Subtraction\n 3 For Multiplication \n 4 For Division\n Enter Your Choice");
	scanf("%f",&choice);
	if(choice==1){
		result=a+b;
		printf("Result is :%f",result);
	}
	else if(choice==2){
		result=a-b;
		printf("Result is :%f",result);
	}
	else if(choice==3){
		result=a*b;
		printf("Result is :%f",result);
	}
	else if(choice==4){
		result=a/b;
		printf("Result is :%f",result);
	}
	else{
		printf("FOOL!!!");
	}
	return EXIT_SUCCESS;
}
