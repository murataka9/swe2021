#include<stdio.h>

int main(void){
	int i;
	int n;
	int fact = 1;
	printf("Please input number:\n");
	scanf ("%d", &n);

	for (i=1; i<=n; ++i) {
		fact = n * i;
		if (i == 3 || i ==5 || i==15){
			printf("%d\n",fact);
		};
	};

	printf("%d\n",fact);
}

