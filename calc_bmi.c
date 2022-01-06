#include <stdio.h>

float calc_bmi (float h, float w) {
	float bmi = 0;
	bmi = w / (h*h);

	return bmi;
}

int main (void){
	float hin, win, res = 0;
	printf("height(cm) as float\t");
	scanf("%f", &hin);
	printf("weight(kg) as float\t");
	scanf("%f", &win);

	hin = hin/100;

	res = calc_bmi(hin, win);
	printf("%f\n", res);
}
