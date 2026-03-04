#include <stdio.h>
#include <string.h>
void encryptRailFence(char *message, int rails) {
  int len = strlen(message);
  char rail[rails][len];
  memset(rail, '\n', sizeof(rail));
  int row = 0, direction = 1;
  for (int i = 0; i < len; i++) {
    rail[row][i] = message[i];
    row += direction;
    if (row == rails - 1 | row == 0)
      direction = -direction;
  }
  printf("Encrypted text: ");
  for (int i = 0; i < rails; i++)
    for (int j = 0; j < len; j++)
      if (rail[i][j] != '\n')
        printf("%c", rail[i][j]);
  printf("\n");
}
int main() {
  char message[100];
  int rails;
  printf("Enter a Secret Message: ");
  scanf("%s", message);
  printf("Enter number of rails: ");
  scanf("%d", &rails);
  encryptRailFence(message, rails);
  return 0;
}
