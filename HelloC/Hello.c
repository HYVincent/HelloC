#include<stdio.h>
#include<stdlib.h>
#include"Util.h"

//此处不写具体实现，放在别的源文件写，不然看起来混乱


//无符号整数类型：unsigned char 1字节
//unsigned short int或者unsigned short 2字节
//unsigned int 4字节
//unsigned long int 或者unsigned long 4字节
//unsigned long long int 或者unsigned long long 8字节
//float 单精度浮点数 4字节 取值范围±3.4E±38（精确到6-7位小数）
//double 双精度浮点数 8字节 取值范围±1.7E±308（精确到15位小数）
//long double  12字节 取值范围±1.19E±4932（精确18位小数）

//读取数据的格式说明符
//读取short类型的数值：%hd
//读取int类型的数值：%d
//读取long类型的数值：%ld
//读取float类型的数值：%f或%e
//读取double类型的数值：%lf或%le
//sizeof（数据类型） 返回值为一个无符号的int类型值，表示该数据类型所占用的字节数
//使用sizeof 数据类型也可以得到该数据类型所占用的字节数  sizeof int;

//init();//demo.c中的函数
//firstC();//firstC.c中的函数
//test();//调用TestC.h中声明的test（）方法
void main(void) {
	printf("Hello C\n");
	printf("输入三角形的三边长a,b,c，求面积\n");
	double a, b, c;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	double area = getTriangleArea(a, b, c);
	if (area = 0.0) {
		printf("这不是一个三角形\n");
	}
	else 
	{
		printf("此三角形的面积是%.2f\n", getTriangleArea(a, b, c));
		printf("此三角形的周长是%.2f\n", getPerimeter(a, b, c));
	}
	
	system("pause");
	
}