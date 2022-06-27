#include<stdio.h>

int maximum(int x, int y){

	int z;
	
	z = (x >= y) ? x : y;
	return z;
}

int main(){
	int a, b, c, d;
	printf("Enter threo numbers: ");
	scanf("%d, %d, %d", &a, &b, &c);
	
	d = maximum(a,b);
	
	printf("The greatest number is: %d\n", maximum(c,d));
	return 0;
}
