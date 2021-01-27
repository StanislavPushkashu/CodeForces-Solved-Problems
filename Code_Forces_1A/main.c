#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    unsigned long n, m, a, res;
    scanf ("%lu %lu %lu", &n, &m, &a);
    res = ((m + a - 1) / a) * ((n + a - 1) / a);
    printf ("%lu", res);
    return 0;
}
