#include<stdlib.h>
#include<stdio.h>
#include"factorial.h"

char *factorial (const int aNumber) {
    int temp = aNumber;
    unsigned long long result = 1;
    while (temp > 1) {
        result *= temp;
        temp--;
    }
    char *res = malloc(4*sizeof(*res));

    temp = 0;
    // printf("%llu \n", result);
    sprintf(res,"%llu",result);
    while (res[temp]) {
        printf("%c ", res[temp]);
        temp++;
    }

    return res;
}