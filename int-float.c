#include <stdio.h>
int main(){
    int i;
    float f;
    printf("input an integer number\t");
    scanf("%d", &i);
    printf("input a float number\t");
    scanf("%f", &f);
    printf("i = %d as int, %f as float\n", i, i);
    printf("f = %d as int, %f as float\n", f, f);
    
    // これは、絶対にやっちゃダメなやつ!!! 
    double dbl;
    printf("input an integer number\t"); 
    scanf("%d", &dbl);
    printf("dbl = %d as int, %lf as double\n", dbl, dbl);
    dbl += 1;
    printf("dbl + 1 = %d as int, %lf as double\n", dbl, dbl);
}
