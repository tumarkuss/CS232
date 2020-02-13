/*  Example: C program to find area of a circle */

#include <stdio.h>
#define PI 3.14159

int main(){
    float r, a,x, circmf;

    printf("Enter radius (in mm):\n");
    scanf("%f", &x);
    r = x/25.4;

    a = PI * r * r;

    circmf = 2 * PI * r;

    printf("Circle's area is %3.2f (sq in).\n", a);

    printf("Circumference is %3.2f (sq in).\n", circmf);
}
