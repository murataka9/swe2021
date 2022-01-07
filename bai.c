#include <stdio.h>

int main(void){
	double n;
	printf("Please input price: \n");
	scanf ("%lf", &n);
	printf("The total price is %f yen (reduced tax rate)", n * 1.08);
}
