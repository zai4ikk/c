//Упражнение 1.8. Напишите программу для подсчета пробелов, табуляций и новых строк


#include <stdio.h>

int main() {
    int c;
    int spaceCount = 0;
    int tabCount = 0;
    int newlineCount = 0;

    printf("Введите текст (нажмите Ctrl+D для завершения ввода):\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            spaceCount++;
        } else if (c == '\t') {
            tabCount++;
        } else if (c == '\n') {
            newlineCount++;
        }
    }

    printf("Пробелы: %d\n", spaceCount);
    printf("Табуляции: %d\n", tabCount);
    printf("Новые строки: %d\n", newlineCount);

    return 0;
}
