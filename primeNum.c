#include<stdio.h>
int main(){

	int min, max, count , i = 0, p;
	
	printf("Entrer minimum and maximum value: ");
	scanf("%d%d", &min, &max);
	
	printf("THe prime numbers between %d and %d are: ", min ,max);
	for(count = min; count < max; count++){
		
		for (p = 2 ; p < count ; p++){
			if (count % p == 0)
				break;
		}
		
		if (count == p){
			printf("%d ", count);
			i++;
		}
	}
	printf("\n");
	printf("Total prime numbers between %d and %d is: %d\n", min, max, i);
	return 0;
}

