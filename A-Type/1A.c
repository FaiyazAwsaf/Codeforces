#include<stdio.h>
#include<math.h>

int main(){

    double m,n,a;
    double  calc1, calc2;

    scanf("%lf %lf %lf", &m, &n, &a);

    calc1 = m / a;
    calc2 = n / a;

    printf("%.0f", ceil(calc1) * ceil(calc2));

    return 0;
}
