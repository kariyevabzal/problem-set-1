#include <stdio.h>
int main() {
    int one, five, ten, twnfive, change;
    one = 1;
    five = 5;
    ten = 10;
    twnfive = 25;
    printf("Сдача: ");
    scanf("%d", &change);
    if (change < 0) {
        printf("Сдача не может быть отрицательной, попробуйте снова: ");
        scanf("%d", &change);
    }
    int c = 0; 
    for (; change > 0; c++) {
        if (change >= twnfive) {
            change -= twnfive;
        } else if (change >= ten) {
            change -= ten;
        } else if (change >= five) {
            change -= five;
        } else if (change >= one) {
            change -= one;
        }
    }
    printf("Необходимое количество монет: %d\n", c);
    return 0;
}