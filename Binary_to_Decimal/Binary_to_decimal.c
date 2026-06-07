#include <stdio.h>
#include <string.h>

int main(void)
{
  char binary[128];
  int decimal_val = 0;

  printf("Insert a binary num (1s and 0s)\n");
  if (scanf("%127s", binary) != 1) {
    printf("Input error.\n");
    return 1;
  }

  for (size_t i = 0; i < strlen(binary); i++) {
    if (binary[i] != '0' && binary[i] != '1') {
      printf("Invalid input: only 0 and 1 are allowed.\n");
      return 1;
    }
    decimal_val = decimal_val * 2 + (binary[i] - '0');
  }

  printf("The Binary num is = %s\n", binary);
  printf("Its decimal equivalent is = %d\n", decimal_val);

  return 0;
}
