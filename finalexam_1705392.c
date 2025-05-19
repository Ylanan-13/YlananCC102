Name: Ma. Hyacinth Claire D. Ylanan
Student ID: 17-05392
  
#include <stdio.h>

int main() {
    int id = 1705392;
    int sum = 0, temp = id;

    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    int U = (sum % 5) + 3;
    printf("Student ID: %d\n", id);
    printf("Sum of digits: %d\n", sum);
    printf("Computed U value: %d\n\n", U);

    if (U == 5) {
        int rows = 5;
        printf("Inverted Triangle of Stars:\n");
        for (int i = rows; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("Pattern generation for U = %d is not implemented in this code.\n", U);
    }

    return 0;
}
