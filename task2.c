#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int a[100];
    for (int i = 0; i < N; i ++){
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < N; i++){
        sum += a[i];
    }
    float midle = (float)sum / N;
    printf("%d\n", sum);
    printf("%.2f\n", midle);
    
    for (int i = N - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    
    return 0;

  
}
