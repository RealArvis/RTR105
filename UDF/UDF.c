#include <stdio.h>

// Without arguments and without return
void without_args_without_return() {
    int num;
    printf("Enter a number: ");
    scanf_s("%d", &num);
    printf("You entered %d\n", num);
}

// With arguments and without return
void with_args_without_return(int num) {
    printf("The number you passed is: %d\n", num);
}

// Without arguments and with return
int without_args_with_return() {
    int num;
    printf("Enter a number: ");
    scanf_s("%d", &num);
    return num;
}

// With arguments and with return
int with_args_with_return(int num) {
    return num * 2;
}

int main() {
    without_args_without_return();
    with_args_without_return(5);
    int result = without_args_with_return();
    printf("The number returned is: %d\n", result);
    int input = 7;
    int final_result = with_args_with_return(input);
    printf("The final result is: %d\n", final_result);
    return 0;
}
