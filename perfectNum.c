#include<stdio.h>

int perfectNum(int n1){
	int i, sum = 0 ;
	for(i = 1; i < n1; i++){
		if (n1 % i == 0){
			sum+=i;
		}
	}
	return sum;
}

int main(){
	int num, a;
	printf("Enter a number(num): ");
	scanf("%d", &num);
	a = perfectNum(num);
	if(a == num){
		printf("\n%d is a perfect number\n", num);
	}
	else{
		printf("\n%d is not a perfect number\n", num);
	}
	return 0;
}

