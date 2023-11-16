//在VScode上的编辑

//#include<stdio.h>
//int main()
//{
//	printf("helloworld");
//	return 0;
//}


//第三章：数据与C

//代码1
//#include<stdio.h>
//int main(void)
//{
//	float a, b,c;
//
//	printf("calculate");//中文无法输出(VS2022)
//	printf("\n");
//
//	printf("a = ");
//	scanf_s("%f",&a);
//	printf("\n");
//	
//	printf("b = ");
//	scanf_s("%f",&b);
//	printf("\n");
//
//	c = a * b;
//	
//	printf("a multi b is %f\n", c);
//	return 0;
//}


////代码2
////整数溢出
//
//#include<stdio.h>
//int main(void)
//{
//	int i = 2147483647;
//
//	unsigned int j = 4294967295;
//
//	printf("%d  %d  %d\n", i, i + 1, i + 2);
//
//	printf("%u  %u   %u", j, j + 1, j + 2);
//
//	return 0;
//}




////代码3
////转义字符
//#include<stdio.h>
//int main(void)
//{
//	printf("123456789");
//	printf("\b");//退格【吞掉打印出来的数字9】
//
//
//	printf("beep:\n");
//	//printf("\a");//蜂鸣
//	
//	printf("input enter\n");
//	getchar();
//
//	printf("123456789");
//	printf("\r");//回车【吞掉上一行的打印结果】
//	printf("enter !!!");
//	printf("123456789");
//	//printf("\007");//蜂鸣
//	return 0;
//}



////代码4 ASCII码
//#include<stdio.h>
//int main(void)
//{
//	char ch = 'R';
//	printf("The code for %c is %d", ch, ch);
//	return 0;
//}


////代码5 char的有无符号类型
//int main()
//{
//	unsigned char e = 'T';
//
//	signed char ae = 'G';
//
//	printf("%c\n%c", e, ae);
//
//	return 0;
//}



////代码6 浮点数【浮点数溢出未加上】
//#include<stdio.h>
//int main(void)
//{
//	float a, b, c;
//	a = 1.021;
//	b = 5.3246e5;
//	c = 1.121e-3;
//
//	printf("a = %f\n", a);
//	printf("b = %f\n", b);
//	printf("c = %f\n", c);
//
//
//	return 0;
//}




////代码7 类型大小
//
////* typesize.c -- 打印类型大小 */
//#include<stdio.h>
//
//int main(void)
//
//{
//	printf("the sizeof int is %d\n", sizeof(int));
//
//	printf("the sizeof char is %d\n", sizeof(char));
//
//	printf("the sizeof float is %d\n", sizeof(float));
//
//	printf("the sizeof double is %d\n", sizeof(double));
//
//	return 0;
//}