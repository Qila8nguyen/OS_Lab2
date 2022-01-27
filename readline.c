#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include <string.h>
#include<ctype.h>

int read_line (char *str) {
    int i =0;
    while (str[i]) {
        if (str[0] == '-') 
            i++;
        if (!isdigit(str[i])) 
            return -1;
        i++;
    }

    return 1;
}