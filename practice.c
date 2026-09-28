#include<stdio.h>
#include<stdlib.h>

void FizzBuzz(int n)
{
    if(n%3==0)
    {
        printf("Fizz");
    }
    if(n%5==0)
    {
        printf("Buzz");
    }
}

int compare(const void * a,const void * b)
{
    int A = *(const int *)a;
    int B = *(const int *)b;

    if(A>B) return -1;
    if(A<B) return 1;
    else return 0;
}

int main()
{
    int* array = malloc(80);
    for(int i=1; i<=20; i++)
    {
        array[i-1] = i;
    }

    for(int i=0; i<=20; i++)
    {
        printf("%d: ",i);
        FizzBuzz(array[i]);
        printf("\n");

    }
    qsort(array,20,sizeof(int),compare);
    printf("Hello, World!");
    return 0;
}