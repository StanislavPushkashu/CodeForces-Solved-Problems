#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
#include <stdbool.h> 

using namespace std;

int cab[101][101], b[101];

static char alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
                          'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
static int alphabet_ascii[] = { 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
                             65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90 };

int check_symbol(int symbol)
{
    int i, j;
    for (i = 0; i < 52; i++)
    {
        if (symbol == alphabet[i])
            return alphabet_ascii[i];
        else
            continue;
    }
    return 0;
}

bool check_repeat(char symbol, int k)
{
    int i;
    for (i = 0; i < k; i++)
        if (symbol == b[i])
            return 1;
    return false;
}

int main()
{
    int flag = 0;
    int i, j, k = 0;
    int n, m;
    int x1, x2, y1, y2;
    char president, datas;
    std::cin >> n >> m >> president;
    //scanf ("%d %d %c", &n, &m, &president);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            std::cin >> datas;
            //scanf (" %c", &datas);
            cab[i][j] = check_symbol(datas);
        }
    }
    /*for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            std::cout << cab[i][j] << " ";
        std::cout << endl;
    }  */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            if (cab[i][j] == president)
            {
                x1 = j; y1 = i; flag = 1; break;
            }
        if (flag == 1)
            break;
    }
    flag = 0;
    for (i = n - 1; i >= 0; i--)
    {
        for (j = m - 1; j >= 0; j--)
            if (cab[i][j] == president)
            {
                x2 = j; y2 = i; flag = 1; break;
            }
        if (flag == 1)
            break;
    }
    ////////
    for (i = x1; i <= x2; i++)
    {
        if (cab[y1 - 1][i] != 0)
        {
            if (check_repeat(cab[y1 - 1][i], k) == 0)
            {
                b[k] = cab[y1 - 1][i]; k++;
            }
        }
    }
    ////////
         //
         //
    for (i = y1; i <= y2; i++)
    {
        if (cab[i][x2 + 1] != 0)
        {
            if (check_repeat(cab[i][x2 + 1], k) == 0)
            {
                b[k] = cab[i][x2 + 1]; k++;
            }
        }
    }
    ////////
          //
    ////////
    for (i = x2; i >= x1; i--)
    {
        if (cab[y2 + 1][i] != 0)
        {
            if (check_repeat(cab[y2 + 1][i], k) == 0)
            {
                b[k] = cab[y2 + 1][i]; k++;
            }
        }
    }
    ////////
    //    //
    ////////
    for (i = y2; i >= y1; i--)
    {
        if (cab[i][x1 - 1] != 0)
        {
            if (check_repeat(cab[i][x1 - 1], k) == 0)
            {
                b[k] = cab[i][x1 - 1]; k++;
            }
        }
    }
    //for (i = 0; i < k; i++)
    //    std::cout << b[i] << " ";
    std::cout << k << endl;
    //printf ("%d\n", k);
    return 0;
}