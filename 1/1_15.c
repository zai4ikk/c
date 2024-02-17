//Упражнение 1.15. Перепишите программу преобразования температур, выделив само преобразование в 
//отдельную функцию.


#include <stdio.h>

double cels_to_fah(double cels) {
    return (cels * 9.0 / 5.0) + 32.0;
}

int main() {
    printf("Температура по Цельсию\tТемпература по Фаренгейту\n");

    double cels, fah;

    for (cels = -50; cels <= 50; cels += 5) {
        fah = cels_to_fah(cels);

        printf("%.2f\t\t\t%.2f\n", cels, fah);
    }

    return 0;
}
