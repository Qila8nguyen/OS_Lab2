#include "readline.h"
#include "factorial.h"
#include<stdio.h>
#include<stdlib.h>

int main () {
    char *text = (char*)malloc(4*sizeof(*text));
    printf("Please enter a line:");
    scanf("%[^\n]s",text);
    printf("You typed a line: %s \n", text);
    if (read_line(text) == 1) {
        printf("%d \n", atoi(text));
        // int num = convertToNumber;
        // printf("%d", factInt(convertToNumber(text)));
        factorial(atoi(text));
    }
    else {
        printf("%d",-1);
    }
    return 0;
}