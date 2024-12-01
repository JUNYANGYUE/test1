#include <stdio.h>
int main()
{

    int a[5] = {1, 2, 3, 4, 5};
    int f = 2 * a[4] + a[3];
    for (int i = 2; i >= 0; i--)
    {
        f = 2 * f + a[i];
    }
    printf("%d", f);
}