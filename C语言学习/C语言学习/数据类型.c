#include<stdio.h>

/*
char  �ַ�����  //printf("%c\n")��ӡ�ַ����� a��
short ������ //printf("%d"\n")��ӡ������ 20��
int  ����  //printf("%d\n")��ӡ����  200000��
long ������//printf("%d\n") 20000000��
long long ��������//printf("d\n")2000000000000��
float �����ȸ�����//printf("%f\n")��ӡ������  С����5��С��
double ˫���ȸ�����//printf("%lf")��ӡ˫���ȸ�����  С����
*/


/*
������е�λ
bit ����λ                  �������㷨��ʾ��
byte �ֽ� 8 bit             һ����λ����һ����������
kb     1024 byte            һ�ֽڵ���8����λ   1111111111111111 ���ܱ�ʾ2^8-1������
mb     1024 kb
gb     1024 mb
tb     1024 gb
pb     1024 tb
*/


int main()
{

	char ch = 'A';
		printf("%c\n", ch);//%c ��ӡ�ַ���ʽ����
		 
		int age = 20;
		printf("%d\n", age);//��ӡ����ʮ��������
	
		
		float f = 5.0;

		printf("%f\n", f);


		double d = 3.14;

		printf("%lf\n", d);
		
		printf("�ַ�����������ڴ�ռ�Ϊ:%d\n", sizeof(char));//1  2^8-1����
		printf("������������ڴ�ռ�Ϊ:%d\n", sizeof(short));//2  2^16-1����
		printf("����������ڴ�ռ�Ϊ:%d\n", sizeof(int));//4
		printf("����������������ڴ�ռ�Ϊ:%d\n", sizeof(long));//4
		printf("��������������ڴ�ռ�Ϊ:%d\n", sizeof(long long));//8
		printf("�����ȸ�����������ڴ�ռ�Ϊ:%d\n", sizeof(float));//4
		printf("˫���ȸ�����������ڴ�ռ�Ϊ:%d\n", sizeof(double));//8
		return 0;



}