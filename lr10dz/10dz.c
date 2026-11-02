#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

void S(int a, int h);
void opred();
void ris(char c, int a, int h);
void parametr(int a, int h);

int main()
{
    int com, x, y;
    char c;
    setlocale(LC_ALL, "RUS");

    puts("Введите символ, из которого будет состоять фигура:");
    scanf(" %c", &c);

    puts("Введите размеры параллелограмма (основание a и высоту h):");
    scanf("%d %d", &x, &y);

    do
    {
        puts("\n\nВведите команду:");
        puts("1 - Вычисление площади фигуры");
        puts("2 - Рисование фигуры введенным символом");
        puts("3 - Вывод параметров фигуры");
        puts("5 - Вывод определения фигуры");
        puts("0 - Выход");

        scanf("%d", &com);

        switch (com)
        {
        case(1):
            puts("\nплощадь:\n");
            S(x, y);
            break;
        case(2):
            puts("\nфигура:\n");
            ris(c, x, y);
            break;
        case(3):
            puts("\nпараметры:\n");
            parametr(x, y);
            break;
        case(5):
            puts("\nопределение фигуры:\n");
            opred();
            break;
        case(0):
            puts("\nконец\n");
            break;
        default:
            puts("\nошибка\n");
        }
    } while (com != 0);

    return 0;
}

void S(int a, int h)
{
    int s = a * h;
    printf("Площадь: %d\n", s);
}

void ris(char c, int a, int h) 
{
    for (int l = 0; l < h; l++) 
    {
        for (int w1 = 0; w1 <= l; w1++)
        {
            printf(" ");
        }
        for (int v1 = 1; v1 <= a && l <= h; v1++) 
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

void parametr(int a, int h) 
{
    printf("Основание  (a) = %d\n", a);
    printf("Высота (h) = %d\n", h);
}
void opred() 
{
    puts("Параллелограмм — это четырехугольник, у которого противоположные стороны попарно параллельны.");
}
