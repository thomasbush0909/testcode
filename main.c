#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
 
    if(argc != 2) {
        fprintf(stderr, "Usage: %s x\n", argv[0]);
        exit(1);
    }

    double x = atof(argv[1]);
    double result = sqrt(x);
    
    int r = 0;
    int hh = 0;

    int pp = 99;

    if(x < 0) {
        fprintf(stderr, "Cannot handle complex roots\n");
        exit(2);
    }

    printf("square root of %f = %f\n", x, result);

    return 0;

}