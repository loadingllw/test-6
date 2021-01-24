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
	char board[ROW][COL];//Ӧ�ó�ʼ��Ϊ�ո�
	//��ʼ������
	InitBoard(board ,ROW,COL);
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//�������
		Playermove(board,ROW,COL);
		ret = Checkwin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//��������
		Computermove(board, ROW, COL);//�������
		ret = Checkwin(board, ROW, COL);
		if (ret!= 'C')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == 'Q')
		printf("ƽ��\n");
}

int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{
		menu();
		printf("��ѡ�� ");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
				break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (a);
	return 0;
}