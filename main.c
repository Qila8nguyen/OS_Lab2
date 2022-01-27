#include "readline.h"
#include "factorial.h"
#include<stdio.h>
#include<stdbool.h>

int convertToNumber (char *str) {
    int i = 0;
    int res = 0;
    bool neg = (str[0] == '-');
    if(neg) i = 1;
    while (str[i]) {
        res = res*10 + (str[i] - '0');
        i++;
    }
    if (neg) res *= -1;

    return res;
}

int main () {
    char *text = (char*)malloc(4*sizeof(*text));
    printf("Please enter a line:");
    scanf("%[^\n]s",text);
    printf("You typed a line: %s \n", text);
    if (read_line(text) == 1) {
        printf("%d \n", convertToNumber(text));
        // int num = convertToNumber;
        // printf("%d", factInt(convertToNumber(text)));
        factorial(factInt(convertToNumber(text)));
    }
    else {
        printf("%d",-1);
    }
    return 0;
}