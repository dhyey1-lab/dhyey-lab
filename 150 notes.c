#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int notes[9] = {0};
    for (int i = 0; i < 9; i++) {
        notes[i] = amount / denominations[i];
        amount = amount % denominations[i];
    }

    printf("Notes required:\n");
    for (int i = 0; i < 9; i++) {
        if (notes[i] > 0) {
            printf("%d * %d\n", notes[i], denominations[i]);
        }
    }

    return 0;
}
