#define _CRT_SECURE_NO_WARNINGS 1
//放在第一行

//xxx.h头文件
//xxx.c源文件
//
//#include<stdio.h>      //调用库函数（printf）引用头文件stdio.h
//int main()           //main主函数一个项目中只能含有一个main
//{ 
//	printf("hello world\n");        //调用库函数（printf）引用头文件stdio.h
//	printf("suxiaoyu\n");
//	//sizeof-关键字- 操作符 - 计算类型或者变量所占空间的大小
//	printf("'%d\n'", sizeof(int));
//	return 0;
//}

//编译+链接+运行代码:ctrl+F5

//
//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整形类型
//	int age = 20;
//	//long
//
//
//
//	return 0;
//
//
//}

//bit - 比特位
//byte - 字节 =8bit
// 
//int main()
//{
//	//创建的一个变量
//	//类型  变量的名字 = 0
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	printf("“%d\n”", age);
//
//	return 0;
//
//
//
//
//}


//局部变量   全局变量
#include <stdio.h>
//int global = 2019;//全局变量
//int main()
//{
//	int local = 2018;//局部变量
//	//下面定义的global会不会有问题？
//	int global = 2020;//局部变量
//	printf("global = %d\n", global);
//	return 0;
//}
//上面的局部变量global变量的定义其实没有什么问题的！
//当局部变量和全局变量同名的时候，局部变量优先使用。
//不建议全局变量和局部变量名字一样




//scanf函数是输入函数

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);


	return 0;
}