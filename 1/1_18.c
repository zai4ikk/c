//Упражнение 1.18. Напишите программу, которая будет в каждой вводимой строке заменять стоящие подряд 
//символы пробелов и табуляций на один пробел и удалять пустые строки


#include <stdio.h>

int main() {
    int c;
    int lastChar = EOF; 
    int isSpacePrinted = 0; 

    printf("Введите строки (введите пустую строку для завершения ввода):\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if (!isSpacePrinted) {
                putchar(' ');
                isSpacePrinted = 1;
            }
        } else if (c == '\n') {
            if (lastChar == '\n') {
                continue;
            }
            putchar('\n');
            isSpacePrinted = 0;
        } else {
            putchar(c);
            isSpacePrinted = 0;
        }

        lastChar = c;
    }

    return 0;
}
