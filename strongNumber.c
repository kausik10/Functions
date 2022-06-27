#include<stdio.h>
//factorial of num
int factorial(int num){
	if (num == 1 || num == 0)
		return 1;
	if (num > 1)
		return num*factorial(num-1);

}

int strongNum(int num){
	int store, rem, value = 0;
	
	//store stores the value of num so that it doesn't change after looping
	store = num;
	while(num > 0 && store != 0)
	{
		rem = store % 10;
		//uncomment the printf afer this to see the effect
		value += (factorial(rem));
		
		//printf("%d\n", value);
		store /= 10;
		
	}
	//printf("\n%d\n", value);
	
	if (value == num)
	//if condition is true return the value of 'value' from this function/
		return 1;
	else
		return 0;
}
int main(){

	int n, a;
	
	printf("Enter a num: ");
	scanf("%d", &n);
	
	//a has the value of 'value' which is then compared to original number n. 
	a = strongNum(n);
	
	if (a)
		printf("%d is a strong num.\n", n);
	else
		printf("%d is not a strong num.\n", n);
		
	return 0;
}
