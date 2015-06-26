//时间：2014/3/18/ 8:36 PM
//作者：陈云龙
//梁爷问我的一道题
//将华氏度转化成摄氏度

#include<stdio.h>

int main() {
	//声明变量（在c里必须先声明变量才可以用）
	float Fahrenheit = 0.0f;	//初始化
	float Celsius = 0.0f;

	printf("Please input Fahrenheit and then get get Celsius from Fahrenheit!");	//打印一行字符串到命令行里
	scanf("%f", &Fahrenheit);		//获得你输入的值（f代表浮点数）
	Celsius = (float)5 / 9 * (Fahrenheit - 32);		//（float表示把整数5强制转化成浮点数，否则5 / 9 = 0）
	printf("Result: %.2f", Celsius);	//%.2f代表以两位小数输出
	return 0;	//此句可有可无
}