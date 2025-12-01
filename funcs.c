#include <stdio.h>
#include "funcs.h"
#include <stdlib.h>
#include <math.h>

void menu_item_1(void)
{
    int choice = 0;
    double x, y, result;

    do {
        printf("\n--- Basic Scientific Calculator ---\n");
        printf("1. Addition (x + y)\n");
        printf("2. Subtraction (x - y)\n");
        printf("3. Multiplication (x * y)\n");
        printf("4. Division (x / y)\n");
        printf("5. Sine   (sin(x))   [x in radians]\n");
        printf("6. Cosine (cos(x))  [x in radians]\n");
        printf("7. Log10  (log10(x))\n");
        printf("8. Square root (sqrt(x))\n");
        printf("9. Back to main menu\n");
        printf("Select: ");

        if (scanf("%d", &choice) != 1) {
            printf("Input error. Returning to main menu.\n");
            choice = 9;
            break;
        }

        switch (choice) {

        case 1: /* Addition */
            printf("Enter x and y: ");
            if (scanf("%lf %lf", &x, &y) != 2) { printf("Invalid input.\n"); break; }
            result = x + y;
            printf("Ahmad's calculator seems to be working! Your answer is: %.6lf\n", result);
            break;

        case 2: /* Subtraction */
            printf("Enter x and y: ");
            if (scanf("%lf %lf", &x, &y) != 2) { printf("Invalid input.\n"); break; }
            result = x - y;
            printf("Ahmad's calculator seems to be working! Your answer is: %.6lf\n", result);
            break;

        case 3: /* Multiplication */
            printf("Enter x and y: ");
            if (scanf("%lf %lf", &x, &y) != 2) { printf("Invalid input.\n"); break; }
            result = x * y;
            printf("Ahmad's calculator seems to be working! Your answer is: %.6lf\n", result);
            break;

        case 4: /* Division */
            printf("Enter x and y (y != 0): ");
            if (scanf("%lf %lf", &x, &y) != 2) { printf("Invalid input.\n"); break; }
            if (y == 0.0) {
                printf("Error: division by zero!\n");
            } else {
                result = x / y;
                printf("Ahmad's calculator seems to be working! Your answer is: %.6lf\n", result);
            }
            break;

        case 5: /* Sine */
            printf("Enter x (radians): ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            result = sin(x);
            printf("Ahmad's calculator seems to be working! Your answer is: %.6lf\n", result);
            break;

        case 6: /* Cosine */
            printf("Enter x (radians): ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            result = cos(x);
            printf("Ahmad's calculator seems to be working! Your answer is: %.6lf\n", result);
            break;

        case 7: /* Log10 */
            printf("Enter x (> 0): ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            if (x <= 0.0) {
                printf("Error: log10 is only defined for x > 0.\n");
            } else {
                result = log10(x);
                printf("Ahmad's calculator seems to be working! Your answer is: %.6lf\n", result);
            }
            break;

        case 8: /* Square root */
            printf("Enter x (>= 0): ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            if (x < 0.0) {
                printf("Error: sqrt is only defined for x >= 0.\n");
            } else {
                result = sqrt(x);
                printf("Ahmad's calculator seems to be working! Your answer is: %.6lf\n", result);
            }
            break;

        case 9:
            printf("Returning to main menu...\n");
            break;

        default:
            printf("Invalid option. Please choose 1–9.\n");
            break;
        }

    } while (choice != 9);

    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }

}

void menu_item_2(void) {
    printf("\n>> Menu 2\n");
    printf("\nSome code here does something useful\n");
    /* you can call a function from here that handles menu 2 */
}

void menu_item_3(void) {
    printf("\n>> Menu 3\n");
    printf("\nSome code here does something useful\n");
    /* you can call a function from here that handles menu 3 */
}

void menu_item_4(void) {
    printf("\n>> Menu 4\n");
    printf("\nSome code here does something useful\n");
    /* you can call a function from here that handles menu 4 */
}
