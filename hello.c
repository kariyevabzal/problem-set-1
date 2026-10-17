#include <stdio.h>
int main() {
    char name[15];
    printf("Введите ваше имя: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);

    return 0;
}