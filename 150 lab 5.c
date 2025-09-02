#include <stdio.h>

int main() {
    int i, j, temp;
    int arr[5];
    int choice;


    printf("Choose 1 for ascending and 2 for descending: ");
    scanf("%d", &choice);


    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }


    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if ((choice == 1 && arr[i] > arr[j]) || (choice == 2 && arr[i] < arr[j])) {

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }


    printf("Sorted array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
