#include<stdio.h>

int main(void){
	int n;
	printf("Input your ID number \n");
	scanf("%d", &n);
	printf("Your problem number is %d\n", n % 6);
	return 0;
}
