#include<stdio.h>
 
int main(){
 
    int a,b,i;
 
    scanf("%d%d", &a, &b);
 
    for(i=0; a<=b; a*=3, b*=2)
        i++;
 
    printf("%d",i);
 
 
return 0;
}
