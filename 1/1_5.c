
//Упражнение 1.5. Измените программу преобразования температур так, чтобы она печатала таблицу в 
//обратном порядке, т. е. от 300 до 0.


#include <stdio.h>

int main() {
    int fah;

    printf("Температура по Фаренгейту\tТемпература по Цельсию\n");

    for (fah = 300; fah >= 0; fah -= 20) {
        double cels = (5.0 / 9.0) * (fah - 32.0);

        printf("%3d\t\t\t\t%6.1f\n", fah, cels);
    }

    return 0;
}
