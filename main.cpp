#include <iostream>
#include <stdio.h>
#include <math.h>
#include "util.h"
#include "string"
#include "area.h"
#include "volume.h"
#include "CWin.hpp"

#define SIZE 15
#define STR "Hello C language.\n"

using namespace std;

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
// void swapStruct(struct data *, struct data *);
// int maximumGrade(struct data arr[]);
void getMaximum();
void doEnum();
void operateFile();
void operateFile2();
void doMalloc();
void nodeTest();
void nodeTest2();
void classTest();

typedef struct
{
    char name[10];
    int math;
} SCORE;
int cnt;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

int main(int, char **)
{
    printf("\n");

    classTest();

    printf("\n");
    return 0;
}

void classTest() {
    CWin cWin1("s1", 20, 30);
    CWin cWin2("s2", 30, 50);
    cWin1.showWeightAndHeight();
    cWin2.showWeightAndHeight();

}

void nodeTest()
{
    NODE a, b, c;
    NODE *ptr = &a;

    a.data = 12,
    b.data = 30;
    c.data = 64;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    while (ptr != NULL)
    {
        printf("addr = %p\n", ptr);
        printf("data = %d\n", ptr->data);
        printf("next = %p\n", ptr->next);

        ptr = ptr->next;
    }
}

void nodeTest2()
{
    int num;
    NODE *first, *current, *previous;
    printf("input node number: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        current = (NODE *)malloc(sizeof(NODE));
        printf("input data for node %d:", i);
        scanf("%d", &current->data);
        if (i == 0)
            first = current;
        else
            previous->next = current;
        current->next = NULL;
        previous = current;
    }

    current = first;

    while (current != NULL)
    {
        printf("addr = %p\n", current);
        printf("data = %d\n", current->data);
        printf("next = %p\n", current->next);
        current = current->next;
    }
}

void doMalloc()
{
    int *ptr;
    ptr = (int *)malloc(sizeof(int));
    *ptr = 1;
    *(ptr + 1) = 5;
    *(ptr + 2) = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("ptr+%d = %d\n", i, *(ptr + i));
    }
    free(ptr);
}

void operateFile2()
{
    char ch;
    int i = 0;
    char str[80];
    FILE *fptr3 = fopen("/Volumes/DataHD/workspace/project_cpp/helloworld/output2.txt", "a");
    printf("please input char");
    while ((ch = getchar()) != 13 && i < 80)
    {
        str[i++] = ch;
    }

    putc('\n', fptr3);
    fwrite(str, sizeof(str), i, fptr3);
    fclose(fptr3);
}

void operateFile()
{
    char ch;
    int count = 0;
    FILE *fptr1, *fptr2, *fptr3;
    fptr1 = fopen("/Volumes/DataHD/workspace/project_cpp/helloworld/test.txt", "r");
    fptr2 = fopen("/Volumes/DataHD/workspace/project_cpp/helloworld/output.txt", "w");
    fptr3 = fopen("/Volumes/DataHD/workspace/project_cpp/helloworld/output2.txt", "a");
    if (fptr1 != NULL && fptr2 != NULL)
    {
        while ((ch = getc(fptr1)) != EOF)
        {
            putc(ch, fptr2);
            printf("%c", ch);
            count++;
        }
        fclose(fptr1);
        fclose(fptr2);
        printf("總共有%d個字元\n", count);
    }
    else
    {
        printf("NULL\n");
    }
}

void doEnum()
{
    enum color
    {
        red,
        green,
        blue
    } shirt;
    shirt = red;
}

int maximumGrade(SCORE *arr)
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

void getMaximum()
{
    SCORE student[3] = {{"Andy", 10}, {"Mary", 90}, {"Flora", 85}};
    int index = maximumGrade(student);
    printf("%s has maximum grade %d\n", student[index].name, student[index].math);
}

void swapStruct(SCORE *data1, SCORE *data2)
{
    SCORE tmp = *data1;
    *data1 = *data2;
    *data2 = tmp;
}

void doSwapStruct()
{
    SCORE Andy = {"Andy", 10}, Mary = {"Mary", 90};
    swapStruct(&Andy, &Mary);
    printf("Name: %s, Grade: %d\n", Andy.name, Andy.math);
    printf("Name: %s, Grade: %d\n", Mary.name, Mary.math);
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

// void rect(int x, int y, int *area, int *peri)
// {
//     *area = x * y;
//     *peri = 2 * (x + y);
// }

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
