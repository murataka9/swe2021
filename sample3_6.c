#include <stdio.h>
void main(void){
    printf("Please input number: ");
    int number = 0;
    scanf("%d", &number);
    int result = 1;
    int i = 1;
    while (i <= number){
	    result *= i;
	    i++;
    }
    printf("%d", result);
}
