#include <stdio.h>
#include <stdlib.h>

int w;

int main()
{
    scanf("%d", &w);
    if (w != 2 && w % 2 == 0)
    {
        printf ("YES");
    }
    else
    {
        printf ("NO");
    }
    return 0;
}
