//Упражнение 1.12. Напишите программу, которая печатает содержимое своего ввода, помещая по одному 
//слову на каждой строке.


#include <stdio.h>

#define IN 1 
#define OUT 0 

int main() {
    int c;
    int state = OUT;

    printf("Введите текст (нажмите Ctrl+D для завершения ввода):\n");

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9') {
            state = IN;
            putchar(c);
        } else {
            if (state == IN) {
                putchar('\n');
            }
            state = OUT;
        }
    }

    return 0;
}
