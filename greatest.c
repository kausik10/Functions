#include<stdio.h>

int greatest(int n1, int n2, int n3){

	if (n1 > n2 && n1 > n3)
		return n1;
	if (n2 > n1 && n2 > n3)
		return n2;
	if (n3 > n1 && n3 > n2)
		return n3;
}

int main(){

	int a, b, c;
	printf("Enter threee numbers (a,b,c): ");
	scanf("%d,%d,%d", &a, &b, &c);
	
	printf("The greatest among %d, %d and %d is:: %d\n", a, b, c, greatest(a,b,c));
	
	return 0;
	
}
