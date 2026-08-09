#include <stdio.h>

int main() {
    int rows, cols, choice;

    printf("Enter the number of rows and columns for the 2-D arrays: ");
    scanf("%d %d", &rows, &cols);

    int arr1[rows][cols], arr2[rows][cols], result[rows][cols];

    printf("Enter elements of the first 2-D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of the second 2-D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Addition of two 2-D arrays\n");
        printf("2. Row-wise sum of elements (First Array)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Addition of two 2-D arrays:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        result[i][j] = arr1[i][j] + arr2[i][j];
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Row-wise sum of elements in the first array:\n");
                for (int i = 0; i < rows; i++) {
                    int rowSum = 0;
                    for (int j = 0; j < cols; j++) {
                        rowSum += arr1[i][j];
                    }
                    printf("Sum of row %d: %d\n", i + 1, rowSum);
                }
                break;

            case 3:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}