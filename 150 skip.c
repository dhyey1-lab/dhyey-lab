#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int length = 5;
    int skip_index = 2;


    for (int i = length - 1; i >= 0; i--) {
        if (i == skip_index) {

            continue;
        }
        int new_pos = (i > skip_index) ? i + 1 : i;
        arr[new_pos] = arr[i];
    }


    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
