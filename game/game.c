#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("***************************\n");
	printf("***************************\n");
	printf("*******    1.play  ********\n");
	printf("*******    0.exit  ********\n");
	printf("***************************\n");

	return 0;
}

void initializationboard(char board[ROWS][CLOS], int rows, int clos, char set)
{//初始化两个数组棋盘
	int i = 0;
	for (int i = 0; i < rows; i++)
	{
		int j = 0;
		for (int j = 0; j < clos; j++)
		{
			board[i][j] = 'set';
		}
	}
}
void displayboard(char board[ROWS][CLOS], int row, int clo)
{
	for (int i = 0; i < clo; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i < row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j < clo; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void setboom(char board[ROWS][CLOS], int row, int clo)
{
	int count = wantboomcount;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (board[x][y] = 0)
		{
			board[x][y] = 1;
			count--;
		}
	}

}
int getboomcount(char board[ROWS][CLOS], int x, int y)
{
	return (board[x - 1][y]) + (board[x - 1][y]) + (board[x - 1][y + 1])
		+ (board[x][y + 1]) + (board[x][y - 1]) + (board[x + 1][y + 1])
		+ (board[x + 1][y - 1]) + (board[x + 1][y]);


}

void findboom(char mine[ROWS][CLOS],char show[ROWS][CLOS], int row, int clo)
{
	int x = 0;
	int y = 0; 
	int win = 0;
	while (win < ROWS*CLOS - wantboomcount)
	{
		printf("请输入你要排查的坐标：\n");
		scanf("%d%d", &x, &y);
		if (x >=1 && x <= row && y>=1 && y <=clo )
		{
			if (mine[x][y] = 1)
			{
				printf("这里有雷，你被炸死了\n");
				displayboard(mine, ROWS, CLOS);
			}
			else
			{
				int count = getboomcount(mine,x,y);
				show[x][y] = count + '0';
				displayboard(show, ROW, CLO);
				win++;
			}
		}

	}
	if (win = ROWS * CLOS - wantboomcount)
	{
		printf("恭喜您挑战成功！\n");
		displayboard(mine, ROW, CLO);
	}



}