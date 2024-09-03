#include <stdio.h>
#include <string.h>

void my_print_revalpha(void);

int main()
{
  printf("\nPrinting reverse alphabet\n");

  my_print_revalpha();

  return 0;
}

void my_print_revalpha(void)
{
  char *alphabet = "abcdefghijklmnopqrstuvwxyz";

  for (int i = strlen(alphabet) - 1; i >= 0; i--)
  {
    putchar(alphabet[i]);
  }
}
