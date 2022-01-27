#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<cstring>

char *factorial (const int aNumber) {
    int temp = aNumber;
    int result = 1;
    while (temp > 1) {
        result *= temp;
        temp--;
    }
    char *res = malloc(4*sizeof(*res));

    temp = 0;
    sprintf(res,"%d",result);
    while (res[temp]) {
        printf("%c ", res[temp]);
        temp++;
    }

    return res;
}