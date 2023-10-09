 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//类型重定义---简单化
//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int a = 0;
//
//	u_int a = 0;//上下两行一样
//
//
//
//	return 0;
//}
//
//void test()
//
//{
//	int a = 1;
//	a++;
//
//	printf("%d\n", a);
//
// }
//
//	int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//
//	}
//
//	return 0;
//}
//
//void test()
//
//{
//	static int a = 1;//static修饰局部变量，改变了局部变量的生命周期（改变了变量的存储类型）
//	a++;
//
//	printf("%d\n", a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//
//	}
//
//	return 0;
//}

//extern int gta5;//extern声明外部符号
//在整个工程里面都能使用

//static修饰全局变量，使得这个全局变量只能在自己的内部源文件可以使用，同工程的其他源文件不能使用！
//全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
// 但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了!

//#define是一个预处理指令
//#define max 1000
//int main()
//
//{
//	printf("%d\n", max);
//
//
//
//	return 0;
//}

//define定义宏
#define add(x,y) ((x)+(y))
int main()
{
	printf("%d\n", 4 * add(2, 3));


	return 0;
}

//
//
//int main()
//{
//	int a = 0;
//	printf("%p\n", &a);
//	int* pa = &a;
//
//	char b = 'w';
//	char * pc = &b;
//
//	return 0;
//}


//x64  指针大小是8个字节
//x86  指针大小是4个字节
// 指针相当于一个门牌号充当一个索引作用，指引内存的地址

//struct stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	float sorce;
//
//
//};
//
//int main()
//{
//	struct stu f = { "fan",18,"man",100.0 };
//	printf("1.%s %d %s %lf  \n", f.name, f.age, f.sex, f.sorce);
//	struct stu* pf = &f;
//	/*printf("2.%s  %d %s %lf",(*pf).name, .......)*/
//	printf("3.%s %d %s %lf  ", pf->name, pf->age, pf->sex, pf->sorce);
//
//
//	return 0;
//}
//
//
//

