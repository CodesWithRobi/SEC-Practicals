#include <stdio.h>
#include <ctype.h>
#include <string.h>
void encipher();
void decipher();
int main() {
  int choice;
  while (1) {
    printf("\n1. Encrypt Text");
    printf("\t2. Decrypt Text");
    printf("\t3. Exit");
    printf("\n\nEnter Your Choice: ");
    scanf("%d", &choice);
    if (choice == 3)
      return 0; // Proper exit from main()
    else if (choice == 1)
      encipher();
    else if (choice == 2)
      decipher();
    else
      printf("Please Enter a Valid Option.\n");
  }
}
void encipher() {
  unsigned int i, j;
  char input[50], key[10];
  printf("\nEnter Plain Text: ");
  scanf("%s", input);
  printf("\nEnter Key Value: ");
  scanf("%s", key);
  printf("\nResultant Cipher Text: ");
  for (i = 0, j = 0; i < strlen(input); i++, j++) {
    if (j >= strlen(key)) {
      j = 0; // Reset key index if it exceeds the key length
    }
    printf("%c", 65 + (((toupper(input[i]) - 65) + (toupper(key[j]) - 65)) % 26));
    // Encryption formula
  }
  printf("\n"); // New line after output
}
void decipher() {
  unsigned int i, j;
  char input[50], key[10];
  int value;
  printf("\n\nEnter Cipher Text: ");
  scanf("%s", input);
  printf("\nEnter the Key Value: ");
  scanf("%s", key);
  printf("\nDecrypted Plain Text: ");
  for (i = 0, j = 0; i < strlen(input); i++, j++) {
    if (j >= strlen(key)) {
      j = 0; // Reset key index if it exceeds the key length
    }// Decryption formula
    value = (toupper(input[i]) - 65) - (toupper(key[j]) - 65);
    if (value < 0) {
      value += 26; // Correct the negative wrap-around in alphabet
    }
    printf("%c", 65 + (value % 26));
  }
  printf("\n"); // New line after output
}
