#include <stdio.h>

int main(void) {
    int a;
    
    scanf("%d", &a);
    
    if(a > 0) {
        printf("양수");
    }else if(a == 0) {
        printf("0");
    }else if(a < 0) {
        printf("음수");
    }
    return 0;
}