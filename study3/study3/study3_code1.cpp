#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ö�ٱ���
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
////������룬��ӡ�����ʲô��Ϊʲô����ͻ��'\0'����Ҫ�ԣ�
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
//    printf("%s\n", arr2);//����������ģ����̶������Ի��������
//    printf("%s\n", arr3);
//    //VS  copy just only one line code ------  ctrl+c
//    return 0;
//    
//
//}


//ת���ַ����ı���ԭ����˼
//ǰ���һ��/��ȷ������


//��ӡ�ַ�%c     ��ӡ�ַ���%s

//
//int main()
//{
//    //printf("c:\test\628\test.c");
//
//    //printf("c:\\test\628\\test.c");
//
//
//    printf("%d\n", strlen("c:\test\628\test.c"));     //14     /t��һ���ַ�
//    //\t��һ���ַ�
//    //\ddd d d d��ʾ1~3���˽��Ƶ����֡� �磺 \130 ��ʾһ���ַ�X
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
//int add(int x,int y)//����add����
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
//    printf("��������������:>");
//    scanf_s("%d %d", &num1, &num2);
//    sum = add(num1, num2);//ʹ��add����-----��Ҫ������ʹ�ã�����Ҫ��main����֮��
//    printf("sum = %d\n", sum);
//    return 0;
//}
////�������ص���Ǽ򻯴��룬���븴�á�
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
//	//0��ʾ�٣���0��ʾ��
//	int a = 10;
//
//	printf("%d\n", !a);//��Ŀ��������
//
//	
//	int   b = 0;
//
//	printf("%d\n", !b);//���1 Ĭ��
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
////ԭ��00000000000000000000000000   32λ   4���ֽ�-32������λ
////����11111111111111111111111111     ~a ��λȡ��
////1111111111111111111111111110  ����
////10000000000000000000000001   ԭ��-1
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
//	//ǿ����������ת��
//	printf("%d\n", a);
//
//
//	return 0;
//}

//�߼������
//&&  ---  and
//||  ---  or

//int main()
//{
//	int a = 2;
//	int b = 0;
//	int c = a && b;
//	printf("%d\n", c); //0   ��
//	int d = a || b;
//	printf("%d\n", d);   //1 ��
//
//
//	return 0;
//}

//��������������Ŀ��������
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
//	//�������������Ļ������1���������ǣ����2
//
//	//if (a > b)
//	//	max = a;
//	//else
//	//	max = b;
//
//
//	return 0;
//}

// ���ű��ʽ�������Ҽ��㣬�������Ľ�������ߵ�

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








