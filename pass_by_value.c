#include <stdio.h>

void fun(int x)
{
    x = 20;
    printf("Fun function x address: %p\n", &x);
}

int main()
{
    int x = 10;
    fun(x); // here we just pass the value of x in the function not the address also, that's why if we change the value of x in the fun function this will not impact on the x value of main function
    printf("Main function x address: %p\n", &x);

    return 0;
}