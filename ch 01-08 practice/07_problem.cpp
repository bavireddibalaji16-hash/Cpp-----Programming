#include <iostream>
using namespace std;

// creating a tic tac toe game 

void display(char board[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkWinner(char board[3][3], char player)
{
    // Check rows
    for(int i = 0; i < 3; i++)
    {
        if(board[i][0] == player &&
           board[i][1] == player &&
           board[i][2] == player)
        {
            return true;
        }
    }

    // Check columns
    for(int j = 0; j < 3; j++)
    {
        if(board[0][j] == player &&
           board[1][j] == player &&
           board[2][j] == player)
        {
            return true;
        }
    }

    // Check first diagonal
    if(board[0][0] == player &&
       board[1][1] == player &&
       board[2][2] == player)
    {
        return true;
    }

    // Check second diagonal
    if(board[0][2] == player &&
       board[1][1] == player &&
       board[2][0] == player)
    {
        return true;
    }

    return false;
}

bool checkDraw(char board[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(board[i][j] == '-')
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    char board[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'},
    };

    char player = 'X';

    int row, column;

    for(int turn = 1; turn <= 9; turn++)
    {
        display(board);

        cout << "Player " << player << " enter row and column: ";
        cin >> row >> column;

        // Check whether position is empty
        if(board[row][column] != '-')
        {
            cout << "Position already occupied!\n";
            turn--;
            continue;
        }

        board[row][column] = player;

        // Check winner
        if(checkWinner(board, player))
        {
            display(board);
            cout << "Player " << player << " wins!\n";
            break;
        }

        // Check draw
        if(checkDraw(board))
        {
            display(board);
            cout << "Game is a draw!\n";
            break;
        }

        // Change player
        if(player == 'X')
            player = 'O';
        else
            player = 'X';
    }

    return 0;
}