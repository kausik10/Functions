#include<stdio.h>

int addNumbers(int n1, int n2)
{
	int sum;
	sum = n1 + n2;
	return sum;
}

int main()
{
	int a, b, add;
	printf("Enter two numbers (a,b): ");
	scanf("%d,%d", &a, &b);
	add = addNumbers(a,b);
	printf("The sum of %d + %d is: %d\n", a, b, add);
	return 0;
}
