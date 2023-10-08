#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//枚举变量
//enum grade
//{
//	first,
//	two,
//	three
//
//
//
//
//};
//
//
//int main()
//{
//	enum grade student1 = two;
//
//	printf("%d\n",two);
//
//	return 0;
//
//}

//#define max  200
//
//
//int main()
//{
//
//	int n = max;
//
//
//	printf("%d\n", n);
//
//
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = { 'a','b','c','\0'};
//
//
//	printf("s%\n", arr1);
//	printf("s%\n", arr2);
//	printf("s%\n", arr3);
//
//	int hhhhh = strlen("abc");
//	printf('d%\n', hhhhh);
//
//	return 0;
//
//
//
//}

//#include <stdio.h>
////下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
//int main()
//{
//    char arr1[] = "bit";
//    char arr2[] = { 'b', 'i', 't' };
//    char arr3[] = { 'b', 'i', 't','\0' };
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);
//    printf("%s\n", arr3);
//    return 0;
//}

#include <stdio.h>
//int main()
//{
//    char arr1[] = "bit";
//    char arr2[] = { 'b','i','t' };
//    char arr3[] = { 'b','i','t','\0'};
//
//    printf("%s\n", arr1);
//    printf("%s\n", arr2);//长度是随机的，不固定，所以会出现乱码
//    printf("%s\n", arr3);
//    //VS  copy just only one line code ------  ctrl+c
//    return 0;
//    
//
//}


//转义字符：改变了原来意思
//前面加一个/来确保正常


//打印字符%c     打印字符串%s

//
//int main()
//{
//    //printf("c:\test\628\test.c");
//
//    //printf("c:\\test\628\\test.c");
//
//
//    printf("%d\n", strlen("c:\test\628\test.c"));     //14     /t算一个字符
//    //\t算一个字符
//    //\ddd d d d表示1~3个八进制的数字。 如： \130 表示一个字符X
//
//    return 0;
//}

//
//int main()
//
//{
//	int num1 = 0;
//	int num2 = 0;
// int sum = 0;
//	scanf("%d,%d", &num1, &num2);
//
//	int sum = Add(num1,num2);
//
//	printf("%d\n", sum);
//
//	return 0;
//}
// 
// 
// 
// 
// 
//int add(int x,int y)//定义add函数
//{
//    int z = x + y;
//    return z;
//
//
//}
//
//
//
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int sum = 0;
//    printf("输入两个操作数:>");
//    scanf_s("%d %d", &num1, &num2);
//    sum = add(num1, num2);//使用add函数-----需要定义再使用，定义要在main函数之外
//    printf("sum = %d\n", sum);
//    return 0;
//}
////函数的特点就是简化代码，代码复用。
//
//
//
//
//int main()
//
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	//char arr[3] = { 'a','b' };
//
//	printf("%d\n", arr[4]);
//
//
//
//	return 0;
//}
//

//
//int main()
//{
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//		
//	return 0;
//}
//
//
//
//int main()
//{
//
//	//0表示假，非0表示真
//	int a = 10;
//
//	printf("%d\n", !a);//单目操作符！
//
//	
//	int   b = 0;
//
//	printf("%d\n", !b);//输出1 默认
//
//
//	return  0;
//}



//int main()
//
//{
//	int a = 0;
//
//	printf("%d\n",~a );
//
//
//	return 0;
//}
//
////原码00000000000000000000000000   32位   4个字节-32个比特位
////补码11111111111111111111111111     ~a 按位取反
////1111111111111111111111111110  反码
////10000000000000000000000001   原码-1
//
//int main()
//{
//	//int a = 10;
//	//int b = ++a;
//	//printf("%d\n", a);   //11
//	//printf("%d\n", b);   //11
//	int a = 10;
//	int b = a++;
//	printf("%d\n", a);   //11
//	printf("%d\n", b);   //10
//
//
//
//	return 0;
//}
//
//int main()
//{
//	int a = (int)3.14;
//	//强制数据类型转化
//	printf("%d\n", a);
//
//
//	return 0;
//}

//逻辑运算符
//&&  ---  and
//||  ---  or

//int main()
//{
//	int a = 2;
//	int b = 0;
//	int c = a && b;
//	printf("%d\n", c); //0   假
//	int d = a || b;
//	printf("%d\n", d);   //1 真
//
//
//	return 0;
//}

//条件操作符（三目操作符）
//
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//	//条件？（成立的话）结果1：（否则是）结果2
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//
//	return 0;
//}

// 逗号表达式从左往右计算，最后给出的结果是最后边的

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//
//	int d = (a = b + 3, c = a + 4, b = c + 2);
//
//
//
//
//	return 0;
//}
//








