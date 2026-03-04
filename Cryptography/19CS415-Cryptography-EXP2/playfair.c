#include <stdio.h>

#define SIZE 5

void buildKey(char *txt, char key[SIZE][SIZE]) {
  int seen[256] = {0};
  int x = 0, y = 0;
  for(int i = 0; txt[i]; i++) {
    if(txt[i] == 'I') txt[i] = 'J';
    if(!seen[txt[i]]) {
      seen[txt[i]] = 1;
      key[x][y++] = txt[i];
      if(y == SIZE) {
        x++;
        y = 0;
      }
    }
  }
  for(int i = 'A'; i != 'Z'+1; i++) {
    if(i == 'I') i = 'J';
    if(!seen[i]) {
      key[x][y++] = i;
      if(y == SIZE) {
        x++;
        y = 0;
      }
    }
  }
}
void toUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

void removeSpaces(char* s) {
    char* d = s;
    do {
        while (*d == ' ') {
            ++d;
        }
    } while (*s++ = *d++);
}

void cryptalgo(int r1, int c1, int r2, int c2, char key[SIZE][SIZE], char result[], int enc, int index) {
    if(r1 == r2) {
      result[index] = key[r1][(c1 + enc + SIZE)%SIZE];
      result[index+1] = key[r2][(c2 + enc + SIZE)%SIZE];
    }
    else if(c1 == c2) {
      result[index] = key[(r1 + enc + SIZE)%SIZE][c1];
      result[index+1] = key[(r2 + enc + SIZE)%SIZE][c2];
    }
    else {
      result[index] = key[r1][c2];
      result[index+1] = key[r2][c1];
    }
}
void playfair(char *txt, char key[SIZE][SIZE], char* result, int enc) {
  int v = 0, r1, c1, r2, c2, xr, xc;
  int index = 0;
  for (int i = 0; i < SIZE*SIZE; i++) {
      if (key[i/SIZE][i%SIZE] == 'X') { xr = i/SIZE; xc = i%SIZE; }
  }
  while(txt[v] && txt[v+1]) {
    if(txt[v] == 'I') txt[v] = 'J';
    else if(txt[v+1] == 'I') txt[v+1] = 'J';
    for (int i = 0; i < SIZE*SIZE; i++) {
        if (key[i/SIZE][i%SIZE] == txt[v]) { r1 = i/SIZE; c1 = i%SIZE; }
        if (key[i/SIZE][i%SIZE] == txt[v+1]) { r2 = i/SIZE; c2 = i%SIZE; }
    }
    if(txt[v] == txt[v+1]) {
      r2 = xr;
      c2 = xc;
      v--;
    }
    cryptalgo(r1, c1, r2, c2, key, result, enc, index);
    index+=2;
    v+=2;
  }

  if(txt[v]) {
    for (int i = 0; i < SIZE*SIZE; i++) {
        if (key[i/SIZE][i%SIZE] == txt[v]) { r1 = i/SIZE; c1 = i%SIZE; }
    }
    cryptalgo(r1, c1, xr, xc, key, result, enc, index);
    index+=2;
    v+=2;
  }
  result[v+1] = '\0';
}

int main() {
  char pt[100];
  char kt[30];
  char key[SIZE][SIZE];

  char encrypted[100] = {' '};
  char decrypted[100];
  
  printf("Enter the Plain Text:");
  scanf("%[^\n]", pt);
  printf("Enter the Key Text:");
  scanf("%s", kt);

  toUppercase(pt);
  removeSpaces(pt);
  toUppercase(kt);

  buildKey(kt, key);

  printf("Key Square:\n");
  for(int i = 0; i < SIZE; i++) {
    for(int j = 0; j < SIZE; j++) {
      printf("%c",key[i][j]);
    }
    printf("\n");
  }

  playfair(pt, key, encrypted, 1);
  printf("Encrypted: %s\n", encrypted);

  playfair(encrypted, key, decrypted, -1);
  printf("decrypted: %s\n", decrypted);
  
}
