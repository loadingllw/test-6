#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("****   1.play      ****\n");
	printf("****   0.exit      ****\n");
	printf("***********************\n");
}

void game()
{
	char ret = 0;
	char board[ROW][COL];//应该初始化为空格
	//初始化棋盘
	InitBoard(board ,ROW,COL);
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//玩家下棋
		Playermove(board,ROW,COL);
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		Computermove(board, ROW, COL);//随机下棋
		ret = Checkwin(board, ROW, COL);
		if (ret!= 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == '#')
		printf("电脑赢了\n");
	else if (ret == 'Q')
		printf("平局\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{
		menu();
		printf("请选择： ");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
				break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (a);
	return 0;
}