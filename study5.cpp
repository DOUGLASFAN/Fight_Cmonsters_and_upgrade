 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	while (i < 101)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	for (int i = 0; i < 101; i++)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//	}
//
//	return 0;
//
//
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	switch (a)
//	{
//	case 1:
//		printf(" ����1");
//		break;
//	case 2:
//		printf(" ����2");
//		break;
//	case 3:
//		printf(" ����3");
//		break;
//
//	case 4:
//		printf(" ����4");
//		break;
//
//	case 5:
//		printf(" ����5");
//		break;
//
//	case 6:
//		printf(" ����6");
//		break;
//
//	case 7:
//		printf(" ����7");
//		break;
//
//	default:
//		printf("�������");
//		break;
//
//
//
//	}
//
//
//
//	return 0;
//}

//
//int m = 2;
//switch (n)
//{
//case 1:
//    m++;
//case 2:
//    n++;
//case 3:
//    switch (n)
//    {//switch����Ƕ��ʹ��
//    case 1:
//        n++;
//    case 2:
//        m++;
//        n++;
//        break;
//    }
//case 4:
//    m++;
//    break;
//default:
//    break;
//}
//printf("m = %d, n = %d\n", m, n);
//return 0;
//}
//
//
//int main()
//{
//	int a = 0;
//	while ((a = getchar()) != EOF)
//		putchar(a);
//	
//
//
//	return 0;
//}

//�����������ǵ�ַ

//int main()
//
//{
//	char password[20] = { 0 };
//	printf("��������Ĵ��룺>");
//	scanf("%s", password);
//	printf("��ȷ����Ĵ��룺>");
//	int i = 0;
//	while ((i = getchar()) != '\n')          //scanf��ȡ���ո�֮��Ͳ�����
//	{
//		getchar();//�����������       getchar �ķ���������int---1�ַ�
//	}
//	int ch = getchar();  //��ȡһ���ַ�
//	if (ch == 'y')
//	{
//		printf("ok\n");
//	}
//	else 
//	{
//		printf("sorry\n");
//	}
//
//	return 0;
//}






//
//int main()
//{
//
//
//
//
//	for (int i = 0; i < 100; i++)
//	{
//
//
//		printf("%d\n", i);
//	}
//
//
//
//
//	return 0;
//}



//
//int main()
//{
//	int i = 0;
//	int j = 0;
//
//	for (; j <= 3; j++)
//	{
//	
//
//		for (; i <= 3; i++)
//		{
//
//
//			printf("%d\n", i);
//		}
//
//
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (; i <= 3; i++)//���һ���ǵ���
//	{
//
//
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//while���ж���ִ��
//do while��ִ�����ж�
//int main()
//
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d\n", i);
//
//		i++;
//
//	} 
//	while (i <= 10);
//
//
//
//	return 0;
//}
//
//
//
//int main()//����n�Ľ׳�
//
//{
//	int j = 0;
//	scanf("%d", &j);
//	int result = 1;
//	for (int i = 1; i <= j; i++)
//	{
//
//		result *= i;
//
//	}
//	printf("%d\n", result);
//	return 0;
//
//}

//int main()//1!+2!+3!......+10!=?
//{
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &j);
//	do
//	{
//		int i = 1;
//		int result = 1;
//		for (; i <= j; i++)
//		{
//			result *= i;
//		}
//		j--;
//		sum += result;
//	}
//	while (j > 0);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()//̫�����鷳
//{
//	int a = 0, b = 1,c = 0,sum = 1,result = 0 ;
//	scanf("%d",&c);
//	for (a = 1; a <= c; a++)
//	{
//		sum = 1;
//		for (b= 1; b <= a; b++)
//		{
//			sum *= b;
//		}
//		result += sum;
//		
//	}
//	printf("%d\n", result);
//	return 0;
//}
//
//
//int main()//��Ч���٣�����׳����
//
//{
//	int a = 1, b = 0, ret = 1, sum = 0;
//	scanf("%d", &b);
//	for ( a = 1; a <= b; a++)
//	{
//		ret *= a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//
////�۰����   ���ֲ���  log2��n��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;//Ҫ���ҵ�����
//	scanf("%d", &k);
//	//��arr�������������в���K��7����ֵ
//	int sz = sizeof(arr) / sizeof(arr[0]);//�����Ԫ�ظ���
//	int left = 0;  //0
//	int right = sz - 1;//9
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//
//		}
//		else
//		{
//			printf("�ҵ���,�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf(" �Ҳ���\n");
//
//	return 0;
//}
#include <string.h>
#include <windows.h>//sleep
//int main()
//
//{
//	char arr1[] = "welcome to fan!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//\0ֻռ���ڴ棬�����㳤��
//	while (left <=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��һ��
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("welcome to fan!!!!!");
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ�����12345��
//	char password[20] = { 0 };
//	for ( i = 0; i < 3; i++)
//	{
//
//		printf("����������-> ");
//		scanf("%s", password);//���鲻��Ҫ&����Ϊ������ǵ�ַ
//		if (strcmp(password, "12345") == 0)//err���������ַ����Ƚϲ���ʹ��==��Ӧ��ʹ��strcmp
//		//strcmpר�űȽ������Ƿ���ȷ���Ƚ����ݣ������ǵ�ַ����ȷ���Ϊ0
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//		printf("��������������˳�");
//	return 0;
//}


//��������Ϸ
void menu()
{
	printf("***************************\n");
	printf("*********1.play************\n");
	printf("*********0.exit************\n");
	printf("***************************\n");
}
int main()
{
	int input = 0;
	
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��\n");
			break;
		}

	}

	while (input);

	return 0;
}























