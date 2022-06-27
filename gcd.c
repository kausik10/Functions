#include<stdio.h>

int gcd(int n1, int n2){

	if (n1 == 0)
		return n2;
	if (n2 == 0)
		return n1;
	if (n1 > n2)
		return gcd(n1 % n2, n2);
	if (n2 > n1)
		return gcd(n2 % n1, n1);
	

}

int main(){

	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("The GCD of %d and %d is: %d\n", a, b, gcd(a,b));
	
	return 0;
}
