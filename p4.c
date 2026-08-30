#include <stdio.h>

int main() {
    int a[10][10], b[10][10], c[10][10];
    int rows, cols, i, j, choice;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("\nEnter elements of First Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter elements of Second Matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    do {
        printf("\n------ MENU ------\n");
        printf("1. Addition of two 2-D arrays\n");
        printf("2. Row-wise sum of elements (First Matrix)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nAddition of Matrices:\n");
                for(i = 0; i < rows; i++) {
                    for(j = 0; j < cols; j++) {
                        c[i][j] = a[i][j] + b[i][j];
                        printf("%d ", c[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("\nRow-wise Sum of First Matrix:\n");
                for(i = 0; i < rows; i++) {
                    int sum = 0;
                    for(j = 0; j < cols; j++) {
                        sum += a[i][j];
                    }
                    printf("Sum of Row %d = %d\n", i + 1, sum);
                }
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}