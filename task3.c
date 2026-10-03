#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int original = a;
    int reverse = 0;
    while (a > 0) {
        int digit = a % 10;
        reverse = reverse * 10 + digit;
        a = a / 10;
    }
    if (original == reverse){
        printf("палиндром");
    }else{
        printf("не палиндром");
    }
    return 0;

    
}