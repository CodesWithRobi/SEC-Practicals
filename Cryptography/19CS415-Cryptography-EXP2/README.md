## EX. NO:2 IMPLEMENTATION OF PLAYFAIR CIPHER

 

## AIM:
 
To write a C program to implement the Playfair Substitution technique.

## DESCRIPTION:

The Playfair cipher starts with creating a key table. The key table is a 5×5 grid of letters that will act as the key for encrypting your plaintext. Each of the 25 letters must be unique and one letter of the alphabet is omitted from the table (as there are 25 spots and 26 letters in the alphabet).

To encrypt a message, one would break the message into digrams (groups of 2 letters) such that, for example, "HelloWorld" becomes "HE LL OW OR LD", and map them out on the key table. The two letters of the diagram are considered as the opposite corners of a rectangle in the key table. Note the relative position of the corners of this rectangle. Then apply the following 4 rules, in order, to each pair of letters in the plaintext:
1.	If both letters are the same (or only one letter is left), add an "X" after the first letter
2.	If the letters appear on the same row of your table, replace them with the letters to their immediate right respectively
3.	If the letters appear on the same column of your table, replace them with the letters immediately below respectively
4.	If the letters are not on the same row or column, replace them with the letters on the same row respectively but at the other pair of corners of the rectangle defined by the original pair.
## EXAMPLE:
![image](https://github.com/Hemamanigandan/EX-NO-2-/assets/149653568/e6858d4f-b122-42ba-acdb-db18ec2e9675)

 

## ALGORITHM:

### STEP-1: Read the plain text from the user.
### STEP-2: Read the keyword from the user.
### STEP-3: Arrange the keyword without duplicates in a 5*5 matrix in the row order and fill the remaining cells with missed out letters in alphabetical order. Note that ‘i’ and ‘j’ takes the same cell.
### STEP-4: Group the plain text in pairs and match the corresponding corner letters by forming a rectangular grid.
### STEP-5: Display the obtained cipher text.




## PROGRAM:

```c
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
```

## OUTPUT:
<img width="619" height="308" alt="image" src="https://github.com/user-attachments/assets/01791d3b-f789-4f94-8597-2a5e1423730c" />

## RESULT:
Successfully made a C program to implement the Playfair Substitution technique.
