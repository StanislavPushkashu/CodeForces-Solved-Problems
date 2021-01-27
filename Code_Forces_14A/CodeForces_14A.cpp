#include <stdio.h>

char a[100][100], lin[100];

int n, m, i, j, pl, pc, ul, uc;
int main()
{
    scanf("%d %d", &n, &m);
    for (i = 1; i <= n; i++)
    {
        scanf("%s", &lin);
        for (j = 1; j <= m; j++)
            a[i][j] = lin[j - 1];
    }
    pl = n; pc = m; ul = uc = 1;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            if (a[i][j] == '*')
            {
                if (i < pl) pl = i;
                if (j < pc) pc = j;
                if (i > ul) ul = i;
                if (j > uc) uc = j;
            }
    // afisare
    for (i = pl; i <= ul; i++)
    {
        for (j = pc; j <= uc; j++)
            printf("%c", a[i][j]);
        printf("\n");
    }


    return 0;
}