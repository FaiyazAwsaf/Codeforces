#include<stdio.h>

int main(){

    unsigned int x;
    int a,b,c,s1,s2,s3,s4,s5;
    scanf("%u", &x);

    s5 = x / 5;
    a = x % 5;
    s4 = a / 4;
    b = a % 4;
    s3 = b / 3;
    c = b % 3;
    s2 = c / 2;
    s1 = c % 2;

    printf("%d", s1+s2+s3+s4+s5);

    return 0;
}
