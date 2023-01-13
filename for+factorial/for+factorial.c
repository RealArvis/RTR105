#include <stdio.h>

int main() {
    int userNum;
    char userType;
    printf("Enter a decimal number: ");
    scanf_s("%d", &userNum);
    printf("Enter data type to use (c for char, i for int, ll for long long): ");
    scanf_s(" %c", &userType);

    if (userType == 'c') {
        char factorial = 1;
        for (char i = 1; i <= userNum; i++) {
            factorial *= i;
            if (factorial < 0) {
                printf("Error: factorial of entered number cannot be calculated using char data type");
                return 0;
            }
        }
        printf("Factorial of %d is %d", userNum, factorial);
    }
    else if (userType == 'i') {

        int factorial = 1;
        for (int i = 1; i <= userNum; i++) {
            factorial *= i;
            if (userNum > 12) {
                printf("Error: factorial of entered number cannot be calculated using int data type");
                return 0;
            }
        }
        printf("Factorial of %d is %d", userNum, factorial);
    }
    else if (userType == 'l') {
        long long factorial = 1;
        for (long long i = 1; i <= userNum; i++) {
            factorial *= i;
            if (factorial < 0) {
                printf("Error: factorial of entered number cannot be calculated using long long data type");
                return 0;
            }
        }
        printf("Factorial of %d is %lld", userNum, factorial);
    }
    else if (userType == 'L') {
        long long factorial = 1;
        for (long long i = 1; i <= userNum; i++) {
            factorial *= i;
            if (factorial < 0) {
                printf("Error: factorial of entered number cannot be calculated using long long data type");
                return 0;
            }
        }
        printf("Factorial of %d is %lld", userNum, factorial);
    }
    else {
        printf("Error: Invalid data type selected");
    }
    return 0;
}
