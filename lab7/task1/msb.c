#include <stdio.h>
#include <stdlib.h>

int msb(int x);
void print_binary(int n);

//Please do not modify main().
//All your changes should be made within msb()
int main(int argc, char **argv) {
    if (argc<2) {
        printf("Invoke as %s <n> \n\twhere <n> is an integer\n",argv[0]);
        return 1;
    }
    int x=atoi(argv[1]);
    printf("X= ");
    print_binary(x);
    printf("\n");
    printf("The most significant bit of %d is at position %d\n",x,msb(x));
    return 0;
}

int msb(int x) {
    if (x==0) return -1;
    //we are looking for a *range* that may contain most significant 1
    //the range is defined by width (w) and end_point (ep)
    //if we say range=6, ep=3, then it describes the following scenario:
    //                 |<--w->|
    //         0000 000* **** ****
    //                        ^
    //                        |
    //                        ep
    // in which * is a wild card which could be 0 or 1
    int w, ep;
    w=0; // Temporary range
    ep=0; // Rightmost bit that might contain most significant 1
    w = (x > 0xffff) << 4; x >>= w;
    ep = (x > 0xff  ) << 3; x >>= ep, w |= ep;
    ep = (x > 0xf   ) << 2; x >>= ep, w |= ep;
    ep = (x > 0x3   ) << 1; x >>= ep, w |= ep;

    return (w | (x >> 1));
}
//Do not modify print_binary
void print_binary(int n) {
    int i;
    for(i=31;i>=0;i--) {
        printf("%c",(n&1<<i)?'1':'0');
        if (0==i%4) printf(" ");
    }
}

