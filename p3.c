#include <stdio.h>

int isPrime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void sumEvenOdd(int arr[], int n) {
    int sumEven = 0, sumOdd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }

    printf("\nSum of even numbers = %d", sumEven);
    printf("\nSum of odd numbers  = %d\n", sumOdd);
}

void sumPrime(int arr[], int n) {
    int sumPr = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            sumPr += arr[i];
    }

    printf("\nSum of prime numbers = %d\n", sumPr);
}

int main() {
    int arr[100], n, choice;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Sum of even and odd numbers\n");
        printf("2. Sum of prime numbers\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sumEvenOdd(arr, n);
                break;
            case 2:
                sumPrime(arr, n);
                break;
            case 3:
                printf("\nExiting program...\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}