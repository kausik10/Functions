#include<stdio.h>

int gcd(int num1, int num2)
{

		if (num2 != 0)
			return gcd(num2, num1 % num2);
		else
			return num1;

}


int main()
{
	int num1, num2, g;
	
	printf("Enter two numebrs to find gcd: ");
	
	scanf("%d%d", &num1, &num2);
	
	g = gcd(num1, num2);
	
	printf("The GCD of two numbers %d and %d is: %d\n", num1, num2, g);
	
	return 0;
}
