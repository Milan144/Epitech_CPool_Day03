#include <stdio.h>

void print_combination(char *arr, int n) {
    for (int i = 0; i < n; i++) {
        putchar(arr[i] + '0');
    }
    putchar(',');
    putchar(' ');
}

void generate_combinations(char *arr, int n, int index, int start) {
    if (index == n) {
        print_combination(arr, n);
        return;
    }

    for (int i = start; i < 10; i++) {
        arr[index] = i;
        generate_combinations(arr, n, index + 1, i + 1);
    }
}

int my_print_combn(int n) {
    char arr[n];
    generate_combinations(arr, n, 0, 0);
    return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%i", &n);
    my_print_combn(n);

    return 0;
}
