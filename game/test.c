#include "game.h"

void game()
{
	char mine[ROWS][CLOS];
	char show[ROWS][CLOS];
	initializationboard(mine, ROWS, CLOS, "0");//初始化数组
	initializationboard(show, ROWS, CLOS, "*");
	displayboard(mine, ROWS, CLOS);//显示数组
	displayboard(show, ROWS, CLOS);

	setboom(mine,ROWS,CLOS);//埋雷

	findboom(mine, ROWS, CLOS);


}

int main()
{
	int choose = 0;

	do
	{
		menu();
		printf("请输入：\n");
		scanf("%d",&choose);
			switch (choose)
			{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏！\n");
				break;
			default:
				printf("选择错误，重新选择\n");
				break;
			}

	} while (choose);



	return 0;
}