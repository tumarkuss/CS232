#include <stdio.h>
#include <stdlib.h>

int midpoint_original(int x, int y) {
    return (x + y)/2;
}
int midpoint_A(int x, int y) {
    return x + ((y - x) / 2);
}

int midpoint_B(int x, int y) {
    return ((unsigned int)x + (unsigned int)y) >> 1;
}

int midpoint_C(int x, int y) {
    return (x & y) + ((x ^ y) >> 1);
}

int main(int argc, char ** argv) {

    int x = 0; /*atoi(argv[1]);*/ //atoi converts string to int
    int y = 0; /*atoi(argv[2]);*/

    printf("Please enter an integer:\n");
    scanf("%d", &x);
    printf("Please enter an integer:\n");
    scanf("%d", &y);

    printf("midpoint_original = %d\n", midpoint_original(x, y));
    printf("midpoint_A = %d\n", midpoint_A(x, y));
    printf("midpoint_B = %d\n", midpoint_B(x, y));
    printf("midpoint_C = %d\n", midpoint_C(x, y));
    return 0;
}


