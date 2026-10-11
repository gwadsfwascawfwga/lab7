#include <stdio.h>

int main() {
    int hour;

    printf("Введите текущий час (от 0 до 23): ");
    scanf("%d", &hour);

    switch (hour / 6) {
        case 0:
            printf("Спокойной ночи\n");
            break;
        case 1:
            printf("Доброго утра\n");
            break;
        case 2:
            printf("Доброго дня\n");
            break;
        case 3:
            printf("Доброго вечера\n");
            break;
    }

    return 0;
}