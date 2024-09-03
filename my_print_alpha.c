#include <stdio.h>
#include <string.h>

int my_print_alpha(void);

int main() {
  printf("Printing alphabet\n");

  my_print_alpha();
  
  return 0;
}

int my_print_alpha(void) {
  char *alphabet = "abcdefghijklmnopqrstuvwxyz\n";

  for (int i = 0; i < strlen(alphabet); i++) {
    putchar(alphabet[i]);
  }

  return 0;
}
