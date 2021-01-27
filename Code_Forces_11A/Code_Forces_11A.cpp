#include <stdio.h>
#include <stdlib.h>

#define EXIT_SUCCESS 0

int n, d, a = 0, k;
int* b;

int main(int argc, char* argv[])
{
    scanf("%d %d", &n, &d);
    b = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &b[i]);
    for (int i = 1; i < n; i++)
    {
        if (b[i] <= b[i - 1])
        {
            a = (b[i - 1] - b[i]) / d;
            k += a + 1;
            b[i] += (a + 1) * d;
        }

    }
    printf("%d", k);
    exit(EXIT_SUCCESS);
}