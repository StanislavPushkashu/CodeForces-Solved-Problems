#include <stdio.h>

int n, z[101], i, j, pp, pi, p = 0, l = 0;

int main()
{
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
                scanf ("%d", &z[i]);
        for (i = 1; i <= n; i++)
                if (z[i] %2) l++; else p++;

        if (l == 1 )
        {
                for (i = 1; i <= n;i++)
                        if (z[i] % 2) { printf("%d", i); break; }
                        }
                        else
                        {
                                for (i = 1; i<=n;i++)
                        if (z[i] % 2 == 0) { printf("%d", i); break; }
                        }
        return 0;
        }
