/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int ROW_SIZE = 8;
    int COLUMN_SIZE = 8;
    
    int board[ROW_SIZE][COLUMN_SIZE] = { 
    { 1, 2, 3, 4, 5, 6, 7, 8 },
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
