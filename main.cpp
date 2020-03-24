#include <iostream>
#include <stdio.h>
#include "area.h"
#include "util.h"
#include "string"
#define SIZE 3

void address(int *);
void add5(int *);
void swap(int *, int *);
void rect(int x, int y, int *area, int *peri);
int *max(int *, int *);
void replace(int *, int, int);
int *maximum(int *);
void basicStruct();
void nestedStruct();
void pointerStruct();
void pointerStructArray();
void doSwapStruct();
void swapStruct(struct data *, struct data *);
int maximumGrade(struct data arr[]);
void getMaximum();
struct data
{
    char name[10];
    int math;
};

int main(int, char **)
{
    printf("\n");

    getMaximum();

    printf("\n");
    return 0;
}

void getMaximum()
{
    struct data student[3] = {{"Andy", 10}, {"Mary", 90}, {"Flora", 85}};
    int index = maximumGrade(student);
    printf("%s has maximum grade %d\n", student[index].name, student[index].math);
}

int maximumGrade(struct data arr[])
{
    int index = 0;
    int max = arr->math;
    for (int i = 0; i < 3; i++)
        if (((arr + i)->math) > max)
        {
            max = (arr + i)->math;
            index = i;
        }

    return index;
}

void doSwapStruct()
{
    struct data Andy = {"Andy", 10}, Mary = {"Mary", 90};
    swapStruct(&Andy, &Mary);
    printf("Name: %s, Grade: %d\n", Andy.name, Andy.math);
    printf("Name: %s, Grade: %d\n", Mary.name, Mary.math);
}

void swapStruct(struct data *data1, struct data *data2)
{
    struct data tmp = *data1;
    *data1 = *data2;
    *data2 = tmp;
}

void pointerStructArray()
{
    struct data
    {
        char name[10];
        int math;
    } student[3] = {{"Andy", 10}, {"Mary", 90}, {"Flora", 85}};

    struct data *ptr = student;

    int max = student->math; // set max to student[0].math
    int index = 0;
    for (int i = 0; i < 3; i++)
        if ((ptr + i)->math > max)
        {
            max = (ptr + i)->math;
            index = i;
        }

    printf("%s has maximum grad is %d\n", (ptr + index)->name, (ptr + index)->math);
}

void pointerStruct()
{
    struct data
    {
        char name[10];
        int math;
    } Andy, *ptr;
    ptr = &Andy;

    printf("please input name:");
    gets(ptr->name);
    printf("please input math grade:");
    scanf("%d", &ptr->math);
    printf("name: %s\n", ptr->name);
    printf("math: %d\n", ptr->math);
}

void nestedStruct()
{
    struct data
    {
        char name[10];
        int math;
        struct date
        {
            int month;
            int day;
        } birthday;
    } Andy = {"Andy", 100, {2, 26}}, student[2];

    printf("Name: %s\n", Andy.name);
    printf("math: %d\n", Andy.math);
    printf("birth: %d %d\n", Andy.birthday.month, Andy.birthday.day);

    for (int i = 0; i < 2; i++)
    {
        printf("please input name:");
        gets(student[i].name);
        printf("please input math grade:");
        scanf("%d", &student[i].math);
        fflush(stdin); // clean cache
    }
    for (int i = 0; i < 2; i++)
        printf("name: %s, math: %d\n", student[i].name, student[i].math);
}

void basicStruct()
{

    struct data
    {
        char name[10];
        int math;
    } student1, student2, Andy = {"Andy", 98};

    // printf("please input name:");
    // gets(student1.name);
    // printf("please input math grade:");
    // scanf("%d", &student1.math);
    // printf("name: %s, math: %d\n", student1.name, student1.math);

    printf("name: %s, math: %d\n", Andy.name, Andy.math);

    struct data Jenny = {"Jenny", 60};
    printf("name: %s, math: %d\n", Jenny.name, Jenny.math);
}

void pointerFor2DArray()
{
    int num[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            printf("num[%d][%d] = %d, addr = %p\n", i, j, *(*(num + i) + j), *(num + i) + j);
}

void doublePointer()
{
    int n = 20, *p, **pp;
    p = &n;
    pp = &p; // *pp = p, **pp = *p
    printf("n = %d, &n = %p\n", n, &n);
    printf("*p = %d, p = %p, &p = %p\n", *p, p, &p); // value, address, self address
    printf("**pp = %d, *pp = %p, pp = %p\n", **pp, *pp, pp);
}

int *maximum(int *ptr)
{
    int *max;
    max = ptr;
    for (int i = 1; i < SIZE; i++)
    {
        if (*(ptr + i) > *max)
        {
            max = (ptr + i);
        }
    }
    return max;
}

void replace(int *a, int n, int num)
{
    *(a + n) = num;
}

int *max(int *n1, int *n2)
{
    return *n1 > *n2 ? n1 : n2;
}

void rect(int x, int y, int *area, int *peri)
{
    *area = x * y;
    *peri = 2 * (x + y);
}

void swap(int *n1, int *n2)
{
    int tmp = *n2;
    *n2 = *n1;
    *n1 = tmp;
}

void add5(int *n)
{
    *n += 5;
}

void address(int *p1)
{
    printf("p1 = %p, *p1 = %d\n", p1, *p1);
}
