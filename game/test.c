#include "game.h"

void game()
{
	char mine[ROWS][CLOS];
	char show[ROWS][CLOS];
	initializationboard(mine, ROWS, CLOS, "0");//��ʼ������
	initializationboard(show, ROWS, CLOS, "*");
	displayboard(mine, ROWS, CLOS);//��ʾ����
	displayboard(show, ROWS, CLOS);

	setboom(mine,ROWS,CLOS);//����

	findboom(mine, ROWS, CLOS);


}

int main()
{
	int choose = 0;

	do
	{
		menu();
		printf("�����룺\n");
		scanf("%d",&choose);
			switch (choose)
			{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ��\n");
				break;
			default:
				printf("ѡ���������ѡ��\n");
				break;
			}

	} while (choose);



	return 0;
}