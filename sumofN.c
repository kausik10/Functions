#include<stdio.h>
int sumNumbers(int n);

int main(){
	int n, sum;
	printf("\nDisplays Sum of n positive numbers.\n\n");
	
	printf("Enter the number of terms for sum: ");
	scanf("%d", &n);
	
	sum = sumNumbers(n);
	
	printf("THe sum of %d positive numbers is : %d\n", n, sum);
	
	return 0;

}

int sumNumbers(int n){

	if (n >= 0)
		return n+sumNumbers(n-1);
	//if (n == 0 )
		//return 0;
	if (n < 0)
		return 0;

}
