#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>
#include <string.h>
#include<ctype.h>

// int factInt (const int aNumber) {
//     if (aNumber <= 1) {
//         return 1;
//     }

//     return aNumber*factInt(aNumber-1);
// }

// char *factorial (int result) {
//     int size = log10(result)+1;
//     char *res = (char *)malloc(size*sizeof(*res));

//     for (int i=1;i<=size;i++) {
//         res[size-i] = result%10 + '0';
//         result /= 10;
//     }

//     for (int i=0;i<size;i++) {
//         printf("%c ", res[i]);
//     }

//     return res;
// }

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

// int main () {
//     char *text = (char*)malloc(4*sizeof(*text));
//     printf("Please enter a line:");
//     scanf("%[^\n]s",text);
//     printf("You typed a line: %s \n", text);
//     if (read_line(text) == 1) {
//         printf("%d \n", convertToNumber(text));
//         // int num = convertToNumber;
//         // printf("%d", factInt(convertToNumber(text)));
//         factorial(factInt(convertToNumber(text)));
//     }
//     else {
//         printf("%d",-1);
//     }
//     return 0;
// }