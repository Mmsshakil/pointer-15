#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    *(arr + 1) = 20;

    for (int i = 0; i < 5; i++)
    {
        printf("%p %d\n", &arr[i], arr[i]);
    }

    return 0;
}