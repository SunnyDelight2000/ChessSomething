/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    const int ROW_SIZE = 8;
    const int COLUMN_SIZE = 8;
    
    enum PieceType
    {
        EMPTY = 0,
        PAWN = 1,
        TOWER = 2,
        BISHOP = 3,
        HORSE = 4,
        QUEEN = 5,
        KING = 6
    };
    
    enum PieceTeam
    {
        Red,
        Green
    };
    
    struct Piece 
    {
        PieceType type,
        PieceTeam team 
    };
    
    int board[ROW_SIZE][COLUMN_SIZE] = { 
    { TOWER, HORSE, 3, 4, 5, 6, 7, 8 },
    { 1, 2, 3, 4, 5, 6, 7, 8 },
    { 1, 2, 3, 4, 5, 6, 7, 8 },
    { 1, 2, 3, 4, 5, 6, 7, 8 },
    { 1, 2, 3, 4, 5, 6, 7, 8 },
    { 1, 2, 3, 4, 5, 6, 7, 8 },
    { 1, 2, 3, 4, 5, 6, 7, 8 },
    { 1, 2, 3, 4, 5, 6, 7, 8 },
    };
    
    for (int index = 0; index < ROW_SIZE; index++) {
        
        for (int something = 0; something < COLUMN_SIZE; something++) {
            cout << board[index][something];
        }
        
        cout << endl;
        
    }
    
    
    return 0;
}

