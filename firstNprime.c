#include<stdio.h>
int main(){
	int n, i, x = 2, j = 0;; 
	printf("Enter how many prime numbers you want to print: ");
	scanf("%d", &n);
	
	if (n > 0)
	{
		printf("The first %d prime numbers are: \n",n);
	}
	
	while (n != 0)
	{
		for (i = 2; i < x; i++)
		{
			if (x % i == 0)
			{
				break;
			}
	
		}
		if (i == x)
		{
			printf("%d ", x);
			n--;
			//j++;
		}
		x++;
	}
	printf("\n");
	//printf("Total number of prime numbers: %d\n", j);
	return 0;
}
