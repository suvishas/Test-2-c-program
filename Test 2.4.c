#include <stdio.h>

int main() {
   char str[100], ch, new_str[100];
   int i, j = 0;
   printf("Enter a string: ");
   fgets(str, sizeof(str), stdin);
   printf("Enter the character to remove: ");
   scanf("%c", &ch);
   for (i = 0; str[i] != '\0'; i++) {
      if (str[i] != ch) {
         new_str[j] = str[i];
         j++;
      }
   }
   new_str[j] = '\0';
   printf("The new string after removing '%c' is: %s", ch, new_str);
   return 0;
}

