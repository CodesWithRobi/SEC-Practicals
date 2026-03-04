#include <stdio.h>

void encryption(char* text, int key) {
  while(*text) {
    if('A' <= *text && *text <= 'Z') {
      *text = (*text-'A'+key+26)%26 + 'A';
    }
    else if ('a' <= *text && *text <= 'z') {
      *text = (*text-'a'+key+26)%26 + 'a';
    }
    text++;
  }
}

void decryption(char* text, int key) {
  encryption(text, -key);
}

char message[100];
int main() {
  int key;

  printf("Enter the text:");
  scanf("%[^\n]", message);
  printf("Enter the key:");
  scanf("%d", &key);

  printf("Encrypted text:");
  encryption(message, key);
  printf("%s\n", message);

  printf("Decrypted text:");
  decryption(message, key);
  printf("%s\n", message);

}
