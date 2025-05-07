#include <stdio.h>
int main()
{
    int x = 10;

    printf("%p\n", &x); // here i print the address of 10

    int *ptr;             // here i declare a pointer value
    ptr = &x;             // here i put the address in the ptr variable
    printf("%p\n", ptr);  // here print the address
    printf("%d\n", *ptr); // here print the value - Dereferencing a pointer

    *ptr = 20;          // here i changed the value of x is 20 but didn't change the address
    printf("%d\n", x);  // it will print new value of x is 20
    printf("%d", *ptr); // here Dereferencing a pointer means , it will print the value of ptr address

    return 0;
}