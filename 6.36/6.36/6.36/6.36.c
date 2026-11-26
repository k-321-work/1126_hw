#include <stdio.h>
#include <stdlib.h>

void stringReverse(char* _str);

int main() {
    int len;
    printf("Enter string length\n");
    scanf_s("%d", &len);

    char str[len + 1];

    printf("Enter string\n");
    for (int i = 0; i < len; i++)
        scanf_s(" %c", str + i);

    str[len] = '\0';

    stringReverse(str);
    printf("\n");

    system("pause");
    return 0;
}

void stringReverse(char* _str) {
    if (*_str == '\0')
        return;

    stringReverse(_str + 1);

    printf("%c", *_str);
}