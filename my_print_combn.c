#include <stdio.h>

void generate_combinations(char *arr, int n, int index, int start) {
    if (index == n) {
        for (int i = 0; i < n; i++) {
            printf("%i", arr[i]);
        }
        printf(", ");
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
