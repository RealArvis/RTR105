#include <stdio.h>

int main() {
    int userNum;
    char userType;
    printf("Enter a decimal number: ");
    scanf_s("%d", &userNum);
    printf("Enter data type to use (c for char, i for int, ll for long long): ");
    scanf_s(" %c", &userType);

    long long factorial = 1;
    int i = userNum;
    while (i > 1) {
        if (userType == 'c' && i > 5) {
            printf("Cannot calculate factorial using char data type, value would be too large.\n");
            return 0;
        }
        else if (userType == 'i' && i > 12) {
            printf("Cannot calculate factorial using int data type, value would be too large.\n");
            return 0;
        }
        else if (userType == 'll' && i > 20) {
            printf("Cannot calculate factorial using long long data type, value would be too large.\n");
            return 0;
        }
        factorial *= i;
        i--;
    }
    printf("Factorial of %d is: %lld\n", userNum, factorial);
    return 0;
}
