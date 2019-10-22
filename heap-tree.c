#include<stdio.h>
#include<stdlib.h>
#define Max 100
void insert(int*, int);
void read_Array(int *array, int n)
{
    for(int i = 0; i <= n; ++i)
        scanf("%d", &array[i]);
}
void display_Array(int * array, int n)
{
    for(int i = 0; i <= n; ++i)
        printf("%d", array[i]);
    printf("\n");
}

int main()
{
    int array[Max];
    int n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    read_Array(array, n);
    display_Array(array, n);
}