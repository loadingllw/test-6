#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3
//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);


//��ӡ����
void DisplayBoard(char board[ROW][COL],int row,int col);

//�������
void Playermove(char board[ROW][COL], int row, int col);

//��������
void Computermove(char board[ROW][COL], int row, int col);

char Checkwin(char board[ROW][COL], int row, int col);