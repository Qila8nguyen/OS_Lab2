#include<math.h>
#include<stdlib.h>
#include<stdio.h>
#include<cstring>

int factInt (const int aNumber) {
    if (aNumber <= 1) {
        return 1;
    }

    return aNumber*factInt(aNumber-1);
}

char *factorial (int result) {
    int size = log10(result)+1;
    char *res = malloc(size*sizeof(*res));

    for (int i=1;i<=size;i++) {
        res[size-i] = result%10 + '0';
        result /= 10;
    }

    return res;
}