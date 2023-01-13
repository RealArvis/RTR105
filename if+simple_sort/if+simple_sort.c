#include <stdio.h>
#include <string.h>

int main() {
    char letter1, letter2, letter3;
    char order[10];
    char letters[3];
    int i, j, min;
    char temp;

    // Asks user to enter three letters
    printf("Enter the first letter: ");
    scanf_s("%c", &letter1, sizeof(letter1));
    printf("Enter the second letter: ");
    scanf_s(" %c", &letter2, sizeof(letter2));
    printf("Enter the third letter: ");
    scanf_s(" %c", &letter3, sizeof(letter3));

    // Asks user for desired order of sequence
    printf("Enter 'alphabet' for alphabetical order or 'opposite' for opposite order: ");
    scanf_s("%9s", order, sizeof(order));

    // Sorts letters in desired order using if-else statement
    letters[0] = letter1;
    letters[1] = letter2;
    letters[2] = letter3;

    if (strcmp(order, "alphabet") == 0) {
        for (i = 0; i < 3; i++) {
            min = i;
            for (j = i + 1; j < 3; j++) {
                if (letters[j] < letters[min]) {
                    min = j;
                }
            }
            temp = letters[i];
            letters[i] = letters[min];
            letters[min] = temp;
        }
    }
    else if (strcmp(order, "opposite") == 0) {
        for (i = 0; i < 3; i++) {
            min = i;
            for (j = i + 1; j < 3; j++) {
                if (letters[j] > letters[min]) {
                    min = j;
                }
            }
            temp = letters[i];
            letters[i] = letters[min];
            letters[min] = temp;
        }
    }

    // Outputs sorted sequence
    printf("Sorted sequence: %c %c %c\n", letters[0], letters[1], letters[2]);
    return 0;
}
