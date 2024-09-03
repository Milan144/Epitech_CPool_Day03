#include <stdio.h>
#include <stdlib.h>

void my_put_nbr(int nb);

void my_put_nbr(int nb) {
  char str[12]; // Assuming the maximum number of digits is 11 (including the sign)
  int i = 0;
  int isNegative = 0;

  if (nb < 0) {
    isNegative = 1;
    nb = -nb;
  }

  do {
    str[i++] = nb % 10 + '0';
    nb /= 10;
  } while (nb > 0);

  if (isNegative) {
    str[i++] = '-';
  }

  while (i > 0) {
    putchar(str[--i]);
  }
}
