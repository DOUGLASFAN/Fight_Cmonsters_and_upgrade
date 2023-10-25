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
//		printf(" 星期1");
//		break;
//	case 2:
//		printf(" 星期2");
//		break;
//	case 3:
//		printf(" 星期3");
//		break;
//
//	case 4:
//		printf(" 星期4");
//		break;
//
//	case 5:
//		printf(" 星期5");
//		break;
//
//	case 6:
//		printf(" 星期6");
//		break;
//
//	case 7:
//		printf(" 星期7");
//		break;
//
//	default:
//		printf("输入错误");
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
//    {//switch允许嵌套使用
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

//数组名本身是地址

//int main()
//
//{
//	char password[20] = { 0 };
//	printf("请输入你的代码：>");
//	scanf("%s", password);
//	printf("请确认你的代码：>");
//	int i = 0;
//	while ((i = getchar()) != '\n')          //scanf读取到空格之后就不读了
//	{
//		getchar();//多次清理缓冲区       getchar 的返回类型是int---1字符
//	}
//	int ch = getchar();  //读取一个字符
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
//	for (; i <= 3; i++)//最后一个是调整
//	{
//
//
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//while先判断在执行
//do while先执行再判断
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
//int main()//计算n的阶乘
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


//int main()//太复杂麻烦
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
//int main()//高效快速，计算阶乘相加
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
////折半查找   二分查找  log2、n次
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;//要查找的数字
//	scanf("%d", &k);
//	//在arr这个有序的数组中查找K（7）的值
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
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
//			printf("找到了,下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf(" 找不到\n");
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
//	int right = strlen(arr1) - 1;//\0只占用内存，不计算长度
//	while (left <=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
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
//	//假设正确的密码是字符串“12345”
//	char password[20] = { 0 };
//	for ( i = 0; i < 3; i++)
//	{
//
//		printf("请输入密码-> ");
//		scanf("%s", password);//数组不需要&，因为本身就是地址
//		if (strcmp(password, "12345") == 0)//err——两个字符串比较不能使用==，应该使用strcmp
//		//strcmp专门比较数组是否正确，比较内容，而不是地址，正确输出为0
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出");
//	return 0;
//}


//猜数字游戏
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
		menu();//打印菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("猜数字\n");
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择\n");
			break;
		}

	}

	while (input);

	return 0;
}























