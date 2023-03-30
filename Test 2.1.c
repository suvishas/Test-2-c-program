#include <stdio.h>

int main() {
   int i,arr[50], size, largest, second_largest;
   printf("Enter the size of the array: ");
   scanf("%d", &size);
   printf("Enter the elements of the array:\n");
   for (i = 0; i < size; i++) {
      scanf("%d", &arr[i]);
   }
   largest = arr[0];
   for (i = 1; i < size; i++) {
      if (arr[i] > largest) {
         largest = arr[i];
      }
   }
   second_largest = arr[0];
   for (i = 1; i < size; i++) {
      if (arr[i] > second_largest && arr[i] != largest) {
         second_largest = arr[i];
      }
   }
   printf("The largest two numbers in the array are %d and %d\n", largest, second_largest);
   return 0;
}
