#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define end_of_board 3

char board[4][4];

void init_board (void)
{
    for (int i = 0; i < end_of_board; i++)
        for (int j = 0; j < end_of_board; j++)
            std::cin >> board[i][j];
}

int num_of_elements (char element)
{
    int num = 0;
    for (int i = 0; i < end_of_board; i++)
        for (int j = 0; j < end_of_board; j++)
            if (board[i][j] == element)
                num++;
    return num;
}

int check_coloumn (char element, int coloumn)
{
    int num = 0;
    for (int i = 0; i < end_of_board; i++)
        if (board[i][coloumn] == element)
            num++;
    if (num == 3)
        return 1;
    return 0;
}

int check_all_coloumns (char element)
{
    for (int i = 0; i < end_of_board; i++)
        if (check_coloumn(element, i) == 1)
            return 1;
    return 0;
}

int check_row (char element, int row)
{
    int num = 0;
    for (int j = 0; j < end_of_board; j++)
        if (board[row][j] == element)
            num++;
    if (num == 3)
        return 1;
    return 0;
}

int check_all_rows (char element)
{
    for (int i = 0; i < end_of_board; i++)
        if (check_row(element, i) == 1)
            return 1;
    return 0;
}

int check_all_diagonals (char element)
{
    int num = 0;
    for (int i = 0; i < end_of_board; i++)
        if (board[i][i] == element)
            num++;
    if (num == 3)
        return 1;
    num = 0;
    for (int i = 0; i < end_of_board; i++)
        if (board[i][end_of_board - i - 1] == element)
            num++;
    if (num == 3)
        return 1;
    return 0;
}

int check_win (char element)
{
    if (check_all_coloumns(element) == 1 || check_all_rows(element) == 1 || check_all_diagonals(element) == 1)
        return 1;
    return 0;
}

void print_board ()
{
    for (int i = 0; i < end_of_board; i++)
    {
        for (int j = 0; j < end_of_board; j++)
            std::cout << board[i][j] << " ";
        std::cout << "\n";
    }
}

int main (int argc, char *argv[])
{
    init_board();
 /*
    std::cout<< "rows X " << check_all_rows('X') <<"\n";
    std::cout<< "rows O " << check_all_rows('0') <<"\n";

    std::cout<< "colimns X " << check_all_coloumns('X') <<"\n";
    std::cout<< "colimns O " << check_all_coloumns('0') <<"\n";

    std::cout<< "diagonals O " <<check_all_diagonals('0') <<"\n";
    std::cout<< "diagonals X " <<check_all_diagonals('X') <<"\n";
*/
    if (check_win('X') == 1 && check_win('0') == 0 && num_of_elements('X') - num_of_elements('0') == 1)
    { std::cout << "the first player won"; return 0; }
    if (check_win('X') == 0 && check_win('0') == 1 && num_of_elements('X') - num_of_elements('0') == 0)
    {std::cout << "the second player won"; return 0; }
    if (check_win('X') == 0 && check_win('0') == 0 && (num_of_elements('X') == 5 && num_of_elements('0') == 4))
    { std::cout << "draw"; return 0; }
    if (check_win('X') == 0 && check_win('0') == 0 && num_of_elements('X') + num_of_elements('0') < 9)
    {
        if (num_of_elements('X') - num_of_elements('0') == 1)
        { std::cout << "second"; return 0; }
        else if (num_of_elements('X') - num_of_elements('0') == 0)
        { std::cout << "first"; return 0; }
        else
        { std::cout << "illegal"; return 0; }
    }
    else
    { std::cout << "illegal"; return 0; }
}
