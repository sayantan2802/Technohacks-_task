#include<stdio.h>
int main(){
    char Subject;
    float A,B;
    printf("Addition(+)\n");
	printf("Substraction(-)\n");
	printf("Multiplication(*)\n");
	printf("Division(/)\n");
	printf("Choose for calculator:\n");
	scanf("%c",&Subject);
	printf("Enter the first number:>\n");
	scanf("%f",&A);
	printf("Enter the second number:>\n");
	scanf("%f",&B);
	switch(Subject)
	{
		case'+':
			printf("The Addition of (%f + %f) = %f",A,B,A+B);
		break;
		case '-':
			printf("The Substraction of (%f - %f) = %f",A,B,A-B);
		break;
		case'*':
			printf("The Multiplication of (%f * %f) = %f",A,B,A*B);
		break;
		case'/':
			printf("The Division of (%f / %f) = %f",A,B,A/B);
		break;
		default:
			printf("error");
		break;
		
		
	}
	return 0;
}