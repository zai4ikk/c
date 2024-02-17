//Упражнение 1.17. Напишите программу печати всех вводимых строк, содержащих более 80 символовм


#include <stdio.h>

#define MAX_LINE_LENGTH 80

int main() {
    int c;
    int length = 0;
    char line[MAX_LINE_LENGTH + 1]; 

    printf("Введите строки (введите пустую строку для завершения ввода):\n");

    while ((c = getchar()) != '\n') {
        if (length < MAX_LINE_LENGTH) {
            line[length++] = c;
        } else {
            line[length] = '\0'; 
            printf("%s\n", line);
            length = 0; 
        }
    }

    if (length > 0) {
        line[length] = '\0'; 
        printf("%s\n", line);
    }

    return 0;
}
