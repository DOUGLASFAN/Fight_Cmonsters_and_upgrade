 #define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����ض���---�򵥻�
//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int a = 0;
//
//	u_int a = 0;//��������һ��
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
//	static int a = 1;//static���ξֲ��������ı��˾ֲ��������������ڣ��ı��˱����Ĵ洢���ͣ�
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

//extern int gta5;//extern�����ⲿ����
//�������������涼��ʹ��

//static����ȫ�ֱ�����ʹ�����ȫ�ֱ���ֻ�����Լ����ڲ�Դ�ļ�����ʹ�ã�ͬ���̵�����Դ�ļ�����ʹ�ã�
//ȫ�ֱ�����������Դ�ļ��ڲ����Ա�ʹ�ã�����Ϊȫ�ֱ��������ⲿ��������
// ���Ǳ�static����֮�󣬾ͱ�����ڲ��������ԣ�����Դ�ļ��Ͳ������ӵ������̬��ȫ�ֱ�����!

//#define��һ��Ԥ����ָ��
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

//define�����
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


//x64  ָ���С��8���ֽ�
//x86  ָ���С��4���ֽ�
// ָ���൱��һ�����ƺų䵱һ���������ã�ָ���ڴ�ĵ�ַ

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

