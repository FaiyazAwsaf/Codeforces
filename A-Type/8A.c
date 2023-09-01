#include<stdio.h>

int main(void){

    int w;

    scanf("%d", &w);

    if (w % 2 == 0 && w > 2 && w <= 100) {

        printf("YES");
        return 0;
    }

    printf("NO");
    return 0;


}
