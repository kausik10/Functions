#include<stdio.h>


int primeNum(int num){
	int i, p = 0;
	
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			p++;
	}
	if (p == 2)
		return num;
	else
		return 0;
}

int main(){

	int n;
	
	printf("Enter a number to check for prime: ");
	scanf("%d", &n);
	
	if (primeNum(n))
		printf("%d is prime\n", n);
	else
		printf("%d is not prime\n", n);
}
