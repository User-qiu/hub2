//talkback.c与用户交互


////代码1 直接改变字符串输出字符
//#include<stdio.h>
//#include<string.h>  //提供strlen()的原型
//
//#define Str "you are an unique person." 
//
//
//int main(void)
//{
//
//	char name[40];
//	name[0] = 'a', name[1] = 'b', name[2] = 'c', name[3] = '\0',
//
//	printf("your name is %s\n", name);
//
//	printf("%s", Str);
//	return 0;
//}





//
////代码2 输入输出字符串
////解决了scanf_s的问题【注意，第一个define必须在第一行作用于整个程序】
////<string.h>头文件可以不添加
// 
// #define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char zu[20];
//	scanf("%s",&zu);
//	printf("%s\n",zu);
//	return 0;
//}




////代码3 两个字符串输出 
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//
//int main(void)
//{
//	char name1[20];
//	char name2[20];
//
//	scanf("%s", name1);
//	scanf("%s", name2);
//
//	printf("%s\n", name1);
//	printf("%s\n", name2);
//
//
//	printf("pri two is :%s%s\n", name1,name2);
//
//	return 0;
//}



////代码4 define的使用
//
//#define _CRT_SECURE_NO_WARNINGS
//#define Nun 100
//#include<stdio.h>
//int main(void)
//{
//	int num;
//	scanf("%d", &num);
//	printf("the number is 100 multipy :%d", num * Nun);
//	return 0;
//}



////代码5 cosst的使用
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//int main(void)
//{
//	const int nnn = 102;//整型常量，不可修改
//
//	/*nnn = 200;*/
//
//	int num;
//	scanf("%d", &num);
//	printf("the number is 102 multipy :%d", num * nnn);
//	return 0;
//}




////代码6 printf中的标识  【4.4.3】//有问题
//#define	_CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//int main(void)
//{
//	printf("%-d\n", 1 - 3);//左对齐
//	printf("%-d\n", 1 + 3);//左对齐
//	printf("%+d\n", 1 - 3);//显示正负
//	printf("%+d\n", 1 +3);//显示正负
//
//	printf("0000%d\n", 2 + 5);//前面加上空格//有问题，待解决
//
//
//	
//	//有问题
//	//+标记覆盖一个空格,有符号值若为正，则在值前面显示前导空格(不显示任何符号); 
//	// 若为负，则在值前面显示减号
//	printf(" %d\n", 1 - 3);
//	printf(" %d\n", 1 + 3);
//
//	return 0;
//}


//
////代码7 printf中的标识2  //其他的未完全标出
//#define _CRT_SECURE_NO_WARNONGS
//#include<stdio.h>
//
//int main(void)
//{
//	int i = 1234567;
//	char arr[20] = "abcdefghi";
//	float f = 1.23456789;
//
//	printf("%.4d\n", i);//打印的最小字符宽度
//	printf("%.4s\n", arr);//打印字符的最大数量
//	printf("%.4f\n", f);//打印数的最大有效位数
//
//	return 0;
//}


////代码8类型的转化




////代码9
///* longstrg.c ––打印较长的字符串 */
//
//#include <stdio.h>
//int main(void)
//
//{
//
//	//法1
//	printf("Here's one way to print a ");
//
//	printf("long string.\n");
//
//	
//
//	//最佳方法【我个人认为】//法2
//	printf("Here's another way to \
//print a long string.\n");
//	
//	
//	//法3
//		printf("Here's the newest way to print a "
//
//			"long string.\n");
//
//	return 0;
//
//}




////代码10  //scanf()中的用法与此不同。把放在%和转换字符之间时，会使得scanf()跳过相应的输出项。
///* skiptwo.c -- 跳过输入中的前两个整数 */
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//int main(void)
//
//{
//
//	int n;
//
//	printf("Please enter three integers:\n");
//
//	scanf("%*d %*d %d", &n);
//
//	printf("The last integer was %d\n", n);
//
//	return 0;
//
//}



////代码11  //scanf的使用
//
///*空白字符（制表符、空格和换行符）在 scanf()处理输入时起着至关重要的作用。
//除了% c 模式（读取下一个字符），scanf()在读取输入时会跳过非空白字符前的所有空白字符，
//然后一直读取字符，直至遇到空白字符或与正在读取字符不匹配的字符。*/
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
//int main(void)
//{
//	int n1, n2, n3;
//	scanf("%d%d%d", &n1, &n2, &n3);
//
//	printf("%d %d %d", n1, n2, n3);
//}