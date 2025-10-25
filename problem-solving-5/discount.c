#include<stdio.h>
int main(){
 float x, p;
    scanf("%f %f", &x, &p);
    float orginal_price=p/(1-x/100);
    float a;
    a=orginal_price;
    printf("%.2f\n", a);
    return 0;
}