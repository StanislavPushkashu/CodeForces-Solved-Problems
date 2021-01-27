#include <stdio.h>
#include <stdlib.h>


struct day { int min; int max; int consumed; int rez; } prep[31];

int n, maxtime, mictime = 0, maretime = 0, dif;

int main(int argc, char* argv[])
{
    int i;
    scanf("%d %d", &n, &maxtime);
    for (i = 1; i <= n; i++)
    {
        scanf("%d %d", &prep[i].min, &prep[i].max);
        prep[i].consumed = prep[i].min;
        prep[i].rez = prep[i].max - prep[i].min;
        mictime += prep[i].min;
        maretime += prep[i].max;
    }

    if (maxtime > maretime || maxtime < mictime)
    {
        printf("NO\n"); return 0;
    }

    dif = maxtime - mictime;

    i = 1;
    while (dif != 0)
    {
        if (prep[i].rez <= dif)
        {
            dif -= prep[i].rez;
            prep[i].consumed = prep[i].max;
            i++;
        }
        else
        {
            prep[i].consumed += dif;
            dif = 0;
        }
    }
    printf("YES\n");
    for (i = 1; i <= n; i++)
        printf("%d ", prep[i].consumed);
    return 0;
}