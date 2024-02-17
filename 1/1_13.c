//Упражнение 1.13. Напишите программу, печатающую гистограммы длин вводимых слов. Гистограмму легко 
//рисовать горизонтальными полосами. Рисование вертикальными полосами — более трудная задача


#include <stdio.h>

#define IN 1  
#define OUT 0 
#define MAX_WORD_LENGTH 20 

int main() {
    int c, state, length;
    int wordLengths[MAX_WORD_LENGTH + 1]; // Массив для подсчета длин слов

    state = OUT;
    length = 0;

    for (int i = 0; i <= MAX_WORD_LENGTH; ++i) {
        wordLengths[i] = 0;
    }

    printf("Введите текст (нажмите Ctrl+D для завершения ввода):\n");

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
            state = IN;
            ++length;
        } else {
            if (state == IN) {
                if (length <= MAX_WORD_LENGTH) {
                    ++wordLengths[length - 1];
                } else {
                    ++wordLengths[MAX_WORD_LENGTH];
                }
                length = 0;
            }
            state = OUT;
        }
    }

    printf("\nГистограмма длин слов:\n");
    for (int i = 0; i < MAX_WORD_LENGTH; ++i) {
        printf("%2d | ", i + 1);
        for (int j = 0; j < wordLengths[i]; ++j) {
            putchar('*');
        }
        putchar('\n');
    }
    printf(">%2d | ", MAX_WORD_LENGTH);
    for (int j = 0; j < wordLengths[MAX_WORD_LENGTH]; ++j) {
        putchar('*');
    }
    putchar('\n');

    return 0;
}
