/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159      //DEFINING THE VALUE OF PI

int main() {
    float r, a, x, circumfr;   // ASSIGNING ALL VARIABLES TO FLOAT AND DECLARING THEM


    printf("Enter radius (in mm):\n"); //PROMPTING USER TO ENTER A RADIUS
    scanf("%f", &x);                   // SCANNING INPUT

    while (x != 0){                 //DECLARING WHILE LOOP, RUNS WHILE INPUT IS VALID

        r = x / 25.4;                                 //CONVERTING MM TO INCH
        a = PI * r * r;                             // FORMULA OF AREA
        circumfr = 2 * PI * r;                      // FORMULA OF CIRCUMFERENCE

        printf("Circle's area is %3.2f (sq in).\n", a);               // PRINT AREA OF CIRCLE
        printf("Circumference is equal to %3.2f (in).\n\n", circumfr);  // PRINT CIRCUMFERENCE

        printf("Enter radius (in mm):\n"); //PROMPTING USER TO ENTER NEW RADIUS
        scanf("%f", &x);                   // SCANNING INPUT

    }
    printf("EXIT\n");
    return 0;           // INPUT IS EQUAL TO 0, EXIT
}