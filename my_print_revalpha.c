#include <stdio.h>
#include <string.h>

int my_print_revalpha(void);

int main()
{
  printf("\nPrinting reverse alphabet\n");

  my_print_revalpha();

  return 0;
}

int my_print_revalpha(void)
{
  char *alphabet = "abcdefghijklmnopqrstuvwxyz";

  for (int i = strlen(alphabet); i >= 0; i--)
  {
    printf("%c", alphabet[i]);
  }

  return 0;
}
