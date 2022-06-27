#include<stdio.h>


int isPrime(int num)
{
	int p;
	for (p = 2 ; p < num ; p++){
			if (num % p == 0)
				//break;
				return 0;
	}
	return 1;
}

int main(){

	int min, max, count , i = 0;
	
	printf("Entrer minimum and maximum value: ");
	scanf("%d%d", &min, &max);
	
	printf("The prime numbers between %d and %d are: ", min ,max);
	for(count = min+1; count < max; count++){
		
		if (isPrime(count)){
			printf("%d ", count);
			i++;
		}
	}
	printf("\n");
	printf("Total prime numbers between %d and %d is: %d\n", min, max, i);
	return 0;
}



