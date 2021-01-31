#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int n, count, d, i, j;
int a[1001];

int main (void)
{
    //printf ("Enter N and D: ");
    scanf ("%d %d", &n, &d);
    for (i = 1; i <= n; i++)
        scanf ("%d", &a[i]);
    for (i = 1; i <= n; i++)
        for (j = 1 + i; j <= n; j++)
            if (abs(a[j] - a[i]) <= d)
                count += 2;
    printf ("%d", count);
    return 0;
}
