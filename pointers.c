#include <stdio.h>
int main()
{
    int x = 10;

    printf("%p\n", &x); // here i print the address of 10

    int *ptr;          // here i declare a pointer value
    ptr = &x;          // here i put the address in the ptr variable
    printf("%p", ptr); // here print the address

    return 0;
}