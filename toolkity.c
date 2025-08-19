// Author: Elma | Date: 6/8/25
#include <stdio.h>

int main() {
    int choice;
    float u, v, a, t, s, F, m;

    do {
        printf("\n----- FORMULA TOOLKIT: LAWS OF MOTION -----\n");
        printf("Choose a formula to calculate:\n");
        printf(" 1. Final Velocity [v = u + at]\n");
        printf(" 2. Displacement [s = ut + 1/2 * at^2]\n");
        printf(" 3. Force [F = ma]\n");
        printf(" 4. Exit the toolkit\n");
        printf("Please enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYou chose: Final Velocity [v = u + at]\n");
                printf("Enter initial velocity (u): ");
                scanf("%f", &u);
                printf("Enter acceleration (a): ");
                scanf("%f", &a);
                printf("Enter time (t): ");
                scanf("%f", &t);
                v = u + a * t;
                printf("Calculated Final Velocity (v): %.2f\n", v);
                break;

            case 2:
                printf("\nYou chose: Displacement [s = ut + 1/2 * at^2]\n");
                printf("Enter initial velocity (u): ");
                scanf("%f", &u);
                printf("Enter acceleration (a): ");
                scanf("%f", &a);
                printf("Enter time (t): ");
                scanf("%f", &t);
                s = u * t + 0.5 * a * t * t;
                printf("Calculated Displacement (s): %.2f\n", s);
                break;

            case 3:
                printf("\nYou chose: Force [F = ma]\n");
                printf("Enter mass (m): ");
                scanf("%f", &m);
                printf("Enter acceleration (a): ");
                scanf("%f", &a);
                F = m * a;
                printf("Calculated Force (F): %.2f\n", F);
                break;

            case 4:
                printf("Exiting the toolkit. Goodbye!\n");
                break;

            default:
                printf("⚠️ Invalid choice. Please select a valid option (1-4).\n");
        }
    } while (choice!= 4);

    return 0;
}
