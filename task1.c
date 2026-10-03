#include <stdio.h>

int main () {
    char name[50];
    int age;
    int high;
    int wes;
    printf("Имя:");
    scanf("%49s", name);
    printf("Возраст:");
    scanf("%d", &age);
    printf("Рост:");
    scanf("%d", &high);
    printf("Вес:");
    scanf("%d", &wes);
    
    printf("Имя: %s\n", name);
    printf("Возраст: %d\n", age);
    printf("Рост: %d\n", high);
    printf("Вес: %d\n", wes);
    return 0;
    
}