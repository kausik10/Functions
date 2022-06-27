#include<stdio.h>

int main(){
	
	int min, max, count, store, i = 0, p;
	printf("Enter minimum value(min): ");
	scanf("%d", &min);
	printf("ENter maximum value(max): ");
	scanf("%d", &max);
	store = min;
	for(count = store; count < max; count++){
	
		store++;
		for (p = 2; p < store; p++){
		
			if (store % p == 0){
				
				break;	
			}
		}
		if(p == store){
				printf("%d ", store);
				i++;
		}	
	}
	printf("\n");
	printf("Total prime numbers between %d and %d is: %d\n",min, max, i);
	return 0;
}
