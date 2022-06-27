#include<stdio.h>
int factorial(int n);

int main(){
	int n, fact;
	
	printf("Enter a number for factorial: ");
	scanf("%d", &n);
	
	fact = factorial(n);
	
	printf("THe factorial of %d is: %d\n", n, fact);
	
	return 0;

}

int factorial(int n){

	if (n == 0 || n == 1)
		return 1;
	if (n > 1)
		return n*factorial(n-1);
	if (n < 0)
		return 0;

}
