#define _CRT_SECURE_NO_WARNINGS 1
//���ڵ�һ��

//xxx.hͷ�ļ�
//xxx.cԴ�ļ�
//
//#include<stdio.h>      //���ÿ⺯����printf������ͷ�ļ�stdio.h
//int main()           //main������һ����Ŀ��ֻ�ܺ���һ��main
//{ 
//	printf("hello world\n");        //���ÿ⺯����printf������ͷ�ļ�stdio.h
//	printf("suxiaoyu\n");
//	//sizeof-�ؼ���- ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С
//	printf("'%d\n'", sizeof(int));
//	return 0;
//}

//����+����+���д���:ctrl+F5

//
//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//��������
//	int age = 20;
//	//long
//
//
//
//	return 0;
//
//
//}

//bit - ����λ
//byte - �ֽ� =8bit
// 
//int main()
//{
//	//������һ������
//	//����  ���������� = 0
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	printf("��%d\n��", age);
//
//	return 0;
//
//
//
//
//}


//�ֲ�����   ȫ�ֱ���
#include <stdio.h>
//int global = 2019;//ȫ�ֱ���
//int main()
//{
//	int local = 2018;//�ֲ�����
//	//���涨���global�᲻�������⣿
//	int global = 2020;//�ֲ�����
//	printf("global = %d\n", global);
//	return 0;
//}
//����ľֲ�����global�����Ķ�����ʵû��ʲô����ģ�
//���ֲ�������ȫ�ֱ���ͬ����ʱ�򣬾ֲ���������ʹ�á�
//������ȫ�ֱ����;ֲ���������һ��




//scanf���������뺯��

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