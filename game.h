#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);


//打印棋盘
void DisplayBoard(char board[ROW][COL],int row,int col);

//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);

//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);

char Checkwin(char board[ROW][COL], int row, int col);