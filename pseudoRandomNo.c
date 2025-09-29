#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int count, min, max;
  printf("Enter the number of random numbers to generate: ");
  scanf("%d", &count);
  printf("Enter the minimum value: ");

  scanf("%d", &min);
  printf("Enter the maximum value: ");
  scanf("%d", &max);
  srand(time(NULL));
  printf("Pseudorandom numbers:\n");
  for (int i = 0; i < count; i++) {
    int random_number = (rand() % (max - min + 1)) + min;
    printf("%d\n", random_number);
  }
  return 0;
}
