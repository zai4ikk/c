//Упражнение 1.9. Напишите программу, копирующую символы ввода в выходной поток и заменяющую 
//стоящие подряд пробелы на один пробел


#include <stdio.h>

int main() {
    int currentChar, previousChar;

    printf("Введите текст (нажмите Ctrl+D для завершения ввода):\n");

    if ((previousChar = getchar()) != EOF) {
        putchar(previousChar); 

        while ((currentChar = getchar()) != EOF) {
            if (!(previousChar == ' ' && currentChar == ' ')) {
                putchar(currentChar); // Печать символа, если не стоящие подряд пробелы
            }
            previousChar = currentChar;
        }
    }

    return 0;
}
