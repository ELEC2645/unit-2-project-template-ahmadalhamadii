#include <stdio.h>
#include "funcs.h"
#include <stdlib.h>
#include <math.h>
#include <string.h>

void menu_item_1(void)
{
    int choice = 0;
    double x, y, result;

    do {
        printf("\n Ahmad's Scientific Calculator \n");
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

        case 1:
            printf("Enter x and y: ");
            if (scanf("%lf %lf", &x, &y) != 2) {
                printf("Invalid input.\n");
                break;
            }
            result = x + y;
            printf("Your answer is: %.6lf\n", result);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 2:
            printf("Enter x and y: ");
            if (scanf("%lf %lf", &x, &y) != 2) {
                printf("Invalid input.\n");
                break;
            }
            result = x - y;
            printf("Your answer is: %.6lf\n", result);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 3:
            printf("Enter x and y: ");
            if (scanf("%lf %lf", &x, &y) != 2) {
                printf("Invalid input.\n");
                break;
            }
            result = x * y;
            printf("Your answer is: %.6lf\n", result);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 4:
            printf("Enter x and y (y != 0): ");
            if (scanf("%lf %lf", &x, &y) != 2) {
                printf("Invalid input.\n");
                break;
            }
            if (y == 0.0) {
                printf("Error: division by zero!\n");
            } else {
                result = x / y;
                printf("Your answer is: %.6lf\n", result);
                printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            }
            break;

        case 5:
            printf("Enter x (radians): ");
            if (scanf("%lf", &x) != 1) {
                printf("Invalid input.\n");
                break;
            }
            result = sin(x);
            printf("Your answer is: %.6lf\n", result);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 6:
            printf("Enter x (radians): ");
            if (scanf("%lf", &x) != 1) {
                printf("Invalid input.\n");
                break;
            }
            result = cos(x);
            printf("Your answer is: %.6lf\n", result);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 7:
            printf("Enter x (> 0): ");
            if (scanf("%lf", &x) != 1) {
                printf("Invalid input.\n");
                break;
            }
            if (x <= 0.0) {
                printf("Error: log10 is only defined for x > 0.\n");
            } else {
                result = log10(x);
                printf("Your answer is: %.6lf\n", result);
                printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            }
            break;

        case 8:
            printf("Enter x (>= 0): ");
            if (scanf("%lf", &x) != 1) {
                printf("Invalid input.\n");
                break;
            }
            if (x < 0.0) {
                printf("Error: sqrt is only defined for x >= 0.\n");
            } else {
                result = sqrt(x);
                printf("Your answer is: %.6lf\n", result);
                printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
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
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void menu_item_2(void)
{
    int choice = 0;
    double R, C, L, f, Vin, Vs, Vout;
    double t, tau, Xc, Xl;
    double peak, Vrms, Vpp;
    double P, V, I;

    do {
        printf("\n Ahmad's Engineering Tools \n");
        printf("1. Sine wave: peak → RMS & Vpp\n");
        printf("2. RC time constant and capacitor voltage\n");
        printf("3. Capacitive reactance (Xc = 1 / (2π f C))\n");
        printf("4. Inductive reactance (Xl = 2π f L)\n");
        printf("5. Voltage divider\n");
        printf("6. Power calculator\n");
        printf("7. Back to main menu\n");
        printf("Select: ");

        if (scanf("%d", &choice) != 1) {
            printf("Input error. Ahmad is sending you back to the main menu.\n");
            choice = 7;
            break;
        }

        switch (choice) {

        case 1:
            printf("Enter peak voltage Vp: ");
            if (scanf("%lf", &peak) != 1) {
                printf("Nice try, but that's not a number.\n");
                break;
            }
            Vrms = peak / sqrt(2.0);
            Vpp  = 2.0 * peak;
            printf("\nAhmad's engineering result:\n");
            printf("  Vrms = %.6lf V\n", Vrms);
            printf("  Vpp  = %.6lf V\n", Vpp);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 2:
        {
            printf("Enter R (ohms): ");
            if (scanf("%lf", &R) != 1) { printf("Invalid input.\n"); break; }
            printf("Enter C (farads): ");
            if (scanf("%lf", &C) != 1) { printf("Invalid input.\n"); break; }
            printf("Enter Vs (volts): ");
            if (scanf("%lf", &Vs) != 1) { printf("Invalid input.\n"); break; }
            printf("Enter time t (seconds): ");
            if (scanf("%lf", &t) != 1) { printf("Invalid input.\n"); break; }

            tau = R * C;
            if (tau <= 0.0) {
                printf("RC should be > 0. Double-check your values.\n");
                break;
            }
            double Vc = Vs * (1.0 - exp(-t / tau));
            printf("\nAhmad's engineering result:\n");
            printf("  Tau (RC) = %.6lf s\n", tau);
            printf("  Vc(t)    = %.6lf V\n", Vc);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
        }
            break;

        case 3:
            printf("Enter frequency f (Hz): ");
            if (scanf("%lf", &f) != 1) { printf("Invalid input.\n"); break; }
            printf("Enter capacitance C (farads): ");
            if (scanf("%lf", &C) != 1) { printf("Invalid input.\n"); break; }
            if (f <= 0.0 || C <= 0.0) {
                printf("f and C must both be > 0.\n");
                break;
            }
#ifdef M_PI
            Xc = 1.0 / (2.0 * M_PI * f * C);
#else
            Xc = 1.0 / (2.0 * 3.141592653589793 * f * C);
#endif
            printf("\nAhmad's engineering result:\n");
            printf("  Xc = %.6lf ohms\n", Xc);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 4:
            printf("Enter frequency f (Hz): ");
            if (scanf("%lf", &f) != 1) { printf("Invalid input.\n"); break; }
            printf("Enter inductance L (henries): ");
            if (scanf("%lf", &L) != 1) { printf("Invalid input.\n"); break; }
            if (f <= 0.0 || L <= 0.0) {
                printf("f and L must both be > 0.\n");
                break;
            }
#ifdef M_PI
            Xl = 2.0 * M_PI * f * L;
#else
            Xl = 2.0 * 3.141592653589793 * f * L;
#endif
            printf("\nAhmad's engineering result:\n");
            printf("  Xl = %.6lf ohms\n", Xl);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 5:
            printf("Enter Vin (volts): ");
            if (scanf("%lf", &Vin) != 1) { printf("Invalid input.\n"); break; }
            printf("Enter R1 (ohms, top resistor): ");
            if (scanf("%lf", &R) != 1) { printf("Invalid input.\n"); break; }
            printf("Enter R2 (ohms, bottom resistor): ");
            if (scanf("%lf", &C) != 1) { printf("Invalid input.\n"); break; }

            if (R < 0.0 || C < 0.0) {
                printf("Resistances should not be negative.\n");
                break;
            }
            if (R + C == 0.0) {
                printf("Total resistance cannot be 0.\n");
                break;
            }
            Vout = Vin * (C / (R + C));
            printf("\nAhmad's engineering result:\n");
            printf("  Vout = %.6lf V\n", Vout);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 6:
        {
            int pchoice;
            printf("\nPower calculator:\n");
            printf("  1. P = V * I\n");
            printf("  2. P = I^2 * R\n");
            printf("  3. P = V^2 / R\n");
            printf("Select: ");
            if (scanf("%d", &pchoice) != 1) {
                printf("Invalid input.\n");
                break;
            }
            switch (pchoice) {
            case 1:
                printf("Enter V (volts) and I (amps): ");
                if (scanf("%lf %lf", &V, &I) != 2) { printf("Invalid input.\n"); break; }
                P = V * I;
                printf("\nAhmad's engineering result:\n");
                printf("  P = %.6lf W\n", P);
                printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
                break;
            case 2:
                printf("Enter I (amps) and R (ohms): ");
                if (scanf("%lf %lf", &I, &R) != 2) { printf("Invalid input.\n"); break; }
                P = I * I * R;
                printf("\nAhmad's engineering result:\n");
                printf("  P = %.6lf W\n", P);
                printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
                break;
            case 3:
                printf("Enter V (volts) and R (ohms): ");
                if (scanf("%lf %lf", &V, &R) != 2) { printf("Invalid input.\n"); break; }
                if (R == 0.0) {
                    printf("R cannot be 0.\n");
                    break;
                }
                P = (V * V) / R;
                printf("\nAhmad's engineering result:\n");
                printf("  P = %.6lf W\n", P);
                printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
                break;
            default:
                printf("That power option doesn't exist (yet).\n");
                break;
            }
        }
            break;

        case 7:
            printf("Heading back to the main menu. Ahmad is proud of you.\n");
            break;

        default:
            printf("That option doesn't exist. Try 1–7.\n");
            break;
        }

    } while (choice != 7);

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void menu_item_3(void)
{
    int choice = 0;
    double x, y;

    do {
        printf("\n Ahmad's Unit Converter\n");
        printf("1. Degrees → Radians\n");
        printf("2. Radians → Degrees\n");
        printf("3. Hertz → rad/s\n");
        printf("4. rad/s → Hertz\n");
        printf("5. dBm → mW\n");
        printf("6. mW → dBm\n");
        printf("7. Voltage scaling (V → mV → µV)\n");
        printf("8. Back to main menu\n");
        printf("Select: ");

        if (scanf("%d", &choice) != 1) {
            printf("Input error. Ahmad is kicking you back to the main menu.\n");
            choice = 8;
            break;
        }

        switch (choice) {

        case 1:
#ifdef M_PI
            printf("Enter angle in degrees: ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            y = x * M_PI / 180.0;
#else
            printf("Enter angle in degrees: ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            y = x * 3.141592653589793 / 180.0;
#endif
            printf("Your answer is: %.6lf radians\n", y);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 2:
#ifdef M_PI
            printf("Enter angle in radians: ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            y = x * 180.0 / M_PI;
#else
            printf("Enter angle in radians: ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            y = x * 180.0 / 3.141592653589793;
#endif
            printf("Your answer is: %.6lf degrees\n", y);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 3:
#ifdef M_PI
            printf("Enter frequency in Hz: ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            if (x < 0.0) { printf("Frequency should be ≥ 0.\n"); break; }
            y = 2.0 * M_PI * x;
#else
            printf("Enter frequency in Hz: ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            if (x < 0.0) { printf("Frequency should be ≥ 0.\n"); break; }
            y = 2.0 * 3.141592653589793 * x;
#endif
            printf("Your answer is: %.6lf rad/s\n", y);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 4:
#ifdef M_PI
            printf("Enter angular frequency in rad/s: ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            y = x / (2.0 * M_PI);
#else
            printf("Enter angular frequency in rad/s: ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            y = x / (2.0 * 3.141592653589793);
#endif
            printf("Your answer is: %.6lf Hz\n", y);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 5:
            printf("Enter power in dBm: ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            y = pow(10.0, x / 10.0);
            printf("Your answer is: %.6lf mW\n", y);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 6:
            printf("Enter power in mW (> 0): ");
            if (scanf("%lf", &x) != 1) { printf("Invalid input.\n"); break; }
            if (x <= 0.0) {
                printf("Power in mW must be > 0.\n");
                break;
            }
            y = 10.0 * log10(x);
            printf("Your answer is: %.6lf dBm\n", y);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
            break;

        case 7:
        {
            double volts, mV, uV;
            printf("Enter voltage in volts: ");
            if (scanf("%lf", &volts) != 1) { printf("Invalid input.\n"); break; }
            mV = volts * 1000.0;
            uV = volts * 1000000.0;
            printf("Your answer:\n");
            printf("  V  = %.6lf V\n", volts);
            printf("  mV = %.6lf mV\n", mV);
            printf("  µV = %.6lf µV\n", uV);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again 😊\n");
        }
            break;

        case 8:
            printf("Returning to main menu...\n");
            break;

        default:
            printf("That option doesn't exist. Try 1–8.\n");
            break;
        }

    } while (choice != 8);

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}


void menu_item_4(void)
{
    int choice = 0;

    do {
        printf("\n Ahmad's Log & Test Centre \n");
        printf("1. Write something to the log file\n");
        printf("2. View the log file\n");
        printf("3. Clear the log file\n");
        printf("4. Run calculator self-test\n");
        printf("5. Back to main menu\n");
        printf("Select: ");

        if (scanf("%d", &choice) != 1) {
            printf("Input error. Ahmad says: try again.\n");
            choice = 5;
            break;
        }

        switch (choice) {

        case 1:
        {
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {
            }

            char buf[256];
            printf("Type your message (one line):\n");

            if (!fgets(buf, sizeof(buf), stdin)) {
                printf("Could not read input.\n");
                break;
            }

            buf[strcspn(buf, "\r\n")] = '\0';

            FILE *fp = fopen("calc_log.txt", "a");
            if (!fp) {
                printf("Could not open log file.\n");
                break;
            }

            fprintf(fp, "%s\n", buf);
            fclose(fp);

            printf("Message saved to calc_log.txt.\n");
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again.\n");
        }
            break;

        case 2:
        {
            FILE *fp = fopen("calc_log.txt", "r");
            if (!fp) {
                printf("Log file not found. Write something first.\n");
                break;
            }

            printf("\n--- Ahmad's Log ---\n");
            char line[256];
            while (fgets(line, sizeof(line), fp)) {
                fputs(line, stdout);
            }
            fclose(fp);
            printf("--- End of Log ---\n");
        }
            break;

        case 3:
        {
            FILE *fp = fopen("calc_log.txt", "w");
            if (!fp) {
                printf("Could not clear the log file.\n");
                break;
            }
            fclose(fp);

            printf("Log file cleared successfully.\n");
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again.\n");
        }
            break;

        case 4:
        {
            printf("\nRunning self-test on Ahmad's calculator...\n");

            const double PI = 3.141592653589793;
            int passed = 0;
            int total = 0;
            double expected, got;
            double eps = 1e-6;

            total++;
            got = sin(PI / 2.0);
            expected = 1.0;
            if (fabs(got - expected) < eps) {
                printf("Test 1: sin(pi/2) = 1  -> PASS\n");
                passed++;
            } else {
                printf("Test 1: sin(pi/2) = 1  -> FAIL (got %.6lf)\n", got);
            }

            total++;
            got = log10(1000.0);
            expected = 3.0;
            if (fabs(got - expected) < eps) {
                printf("Test 2: log10(1000) = 3 -> PASS\n");
                passed++;
            } else {
                printf("Test 2: log10(1000) = 3 -> FAIL (got %.6lf)\n", got);
            }

            total++;
            got = sqrt(16.0);
            expected = 4.0;
            if (fabs(got - expected) < eps) {
                printf("Test 3: sqrt(16) = 4    -> PASS\n");
                passed++;
            } else {
                printf("Test 3: sqrt(16) = 4    -> FAIL (got %.6lf)\n", got);
            }

            total++;
            got = 10.0 / sqrt(2.0);
            expected = 7.0710678;
            if (fabs(got - expected) < 1e-3) {
                printf("Test 4: RMS from 10 V peak -> PASS\n");
                passed++;
            } else {
                printf("Test 4: RMS from 10 V peak -> FAIL (got %.6lf)\n", got);
            }

            printf("\nSelf-test summary: %d out of %d tests passed.\n", passed, total);
            printf("You did a great job using Ahmad's calculator! Go back to the main menu and use it again.\n");
        }
            break;

        case 5:
            printf("Returning to main menu...\n");
            break;

        default:
            printf("Invalid option. Choose 1–5.\n");
            break;
        }

    } while (choice != 5);

    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}
