#include<stdio.h>
#include<stdlib.h>
#include"Util.h"

//�˴���д����ʵ�֣����ڱ��Դ�ļ�д����Ȼ����������


//�޷����������ͣ�unsigned char 1�ֽ�
//unsigned short int����unsigned short 2�ֽ�
//unsigned int 4�ֽ�
//unsigned long int ����unsigned long 4�ֽ�
//unsigned long long int ����unsigned long long 8�ֽ�
//float �����ȸ����� 4�ֽ� ȡֵ��Χ��3.4E��38����ȷ��6-7λС����
//double ˫���ȸ����� 8�ֽ� ȡֵ��Χ��1.7E��308����ȷ��15λС����
//long double  12�ֽ� ȡֵ��Χ��1.19E��4932����ȷ18λС����

//��ȡ���ݵĸ�ʽ˵����
//��ȡshort���͵���ֵ��%hd
//��ȡint���͵���ֵ��%d
//��ȡlong���͵���ֵ��%ld
//��ȡfloat���͵���ֵ��%f��%e
//��ȡdouble���͵���ֵ��%lf��%le
//sizeof���������ͣ� ����ֵΪһ���޷��ŵ�int����ֵ����ʾ������������ռ�õ��ֽ���
//ʹ��sizeof ��������Ҳ���Եõ�������������ռ�õ��ֽ���  sizeof int;

//init();//demo.c�еĺ���
//firstC();//firstC.c�еĺ���
//test();//����TestC.h��������test��������
void main(void) {
	printf("Hello C\n");
	printf("���������ε����߳�a,b,c�������\n");
	double a, b, c;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	double area = getTriangleArea(a, b, c);
	if (area = 0.0) {
		printf("�ⲻ��һ��������\n");
	}
	else 
	{
		printf("�������ε������%.2f\n", getTriangleArea(a, b, c));
		printf("�������ε��ܳ���%.2f\n", getPerimeter(a, b, c));
	}
	
	system("pause");
	
}