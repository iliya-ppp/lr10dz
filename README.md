# **Домашнее задание к работе 10**

### Условие задачи:
Составьте программу, которая для заданной пользователем фигуры предлагает меню выбора операций (расчет площади, вывод определения, рисование фигуры, вывод параметров). 

## **1. Алгоритм и блок-схема**
Алгоритм

1. Начало
2. Объявление переменных (`com`, `x`, `y`, `c`) и ввод пользователем символа рисунка и размеров параллелограмма ($a$ и $h$).
3. Запуск цикла `do-while`, продолжающегося до ввода команды `0`:
   - Вывод меню доступных команд (1 — площадь, 2 — рисование, 3 — параметры, 5 — определение, 0 — выход) и считывание команды `com`.
   - Обработка команды с помощью `switch (com)`: вызов функций `S`, `ris`, `parametr`, `opred` либо завершение работы.
4. Конец

<img width="651" height="775" alt="image" src="https://github.com/user-attachments/assets/6619d730-38ca-48b8-9dde-0fb649d4be37" />

https://app.diagrams.net/#G1h9ce3wK95cdH4mcEbKo1JV2szv6AGC5W#%7B%22pageId%22%3A%22nmdmkFqkc0RFyzZJc154%22%7D

## **2. Реализация программы**

```c
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

```
## **3. Результаты работы программы**

<img width="694" height="861" alt="image" src="https://github.com/user-attachments/assets/34d07628-dfd7-4542-8055-5a7529541ed1" />

<img width="1139" height="878" alt="image" src="https://github.com/user-attachments/assets/2ac7b98f-3453-47fb-b040-667d0bfbc675" />

<img width="493" height="243" alt="image" src="https://github.com/user-attachments/assets/4e0923a5-5678-464f-b84b-22dfbe72318a" />




## **4. Информация о разработчике**

Бицт-261 Мамонов Илья
