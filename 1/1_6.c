
//Упражнение 1.6. Убедитесь в том, что выражение getchar() != EOF получает значение 0 или 1 .


#include <stdio.h>

int main() {
    int result;

    printf("Введите символ (нажмите Ctrl+D для завершения ввода):\n");

    while ((result = getchar()) != EOF) {
        printf("Значение выражения getchar() != EOF: %d\n", result);
    }

    printf("Значение выражения getchar() != EOF после завершения ввода: %d\n", result);

    return 0;
}
