#include <stdio.h>

void fun(int *p) // here we will take address that's why *p and the value of address is a integer that's why int
{
    *p = 20; // changing the value of this address
}

int main()
{
    int x = 10;
    fun(&x); // here we just pass the address of x
    printf("%d", x);

    return 0;
}