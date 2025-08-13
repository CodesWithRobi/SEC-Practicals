#include <stdio.h>

void encryption(char* text, int key) {
  while(text[0]) {
    if('A' <= text[0] && text[0] <= 'Z') {
      text[0] = (text[0]-'A'+key)%26 + 26 + 'A';
    }
    else if ('a' <= text[0] && text[0] <= 'z') {
      text[0] = (text[0]-'a'+key)%26 + 'a';
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

  scanf("%[^\n]", message);
  scanf("%d", &key);

  encryption(message, key);
  printf("%s\n", message);

  decryption(message, key);
  printf("%s\n", message);


}
