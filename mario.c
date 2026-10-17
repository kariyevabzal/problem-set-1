#include <stdio.h>
#include <windows.h>
int main() {
   int height;
   printf("Введите высоту пирамиды: ");
   scanf("%d", &height);

   if (height < 1) {
      printf("Высота пирамиды должна быть больше 1, попробуйте снова: ");
      scanf("%d", &height);

   }
    if (height > 8) {
      printf("Высота пирамиды должна быть меньше или равна 8, попробуйте снова: ");
      scanf("%d", &height);

   }
   for (int i = 1; i <= height; i++) {
      for (int j = 0; j < height - i; j++) {
         printf(" ");
      }
      for (int k = 0; k < (2 * i - 1); k++) {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}