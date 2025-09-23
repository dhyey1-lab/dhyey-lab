#include <stdio.h>
int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int a[100][100], b[100][100], sum[100][100];

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j) {
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }

    // Add corresponding elements and store in sum[][]
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of the two matrices:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
