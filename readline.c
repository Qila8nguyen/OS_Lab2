#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include"readline.h"

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