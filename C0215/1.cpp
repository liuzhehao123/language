#define _CRT_SECURE_NO_WARNINGS 1

//输出什么
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	//原码 1000 0000 0000 0000 0000 0000 0000 0001
//	//补码 1111 1111 1111 1111 1111 1111 1111 1111
//	//存到a里面的 1111 1111
//	signed char b = -1;
//	//存到a里面的 1111 1111
//	unsigned char c = -1;
//	//存到a里面的 1111 1111
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//打印%d，整型提升
//	//a和b补符号位 1111 1111 1111 1111 1111 1111 1111 1111
//	//原码 1000 0000 0000 0000 0000 0000 0000 0001
//	//c无符号，前面补0，0000 0000 0000 0000 0000 1111 1111 即-1
//	//原码 0000 0000 0000 0000 0000 1111 1111 即255
//	return 0;
//}


////输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	// 1000 0000 0000 0000 0000 0000 1000 0000 -原码
//	// 1111 1111 1111 1111 1111 1111 1000 0000 -补码
//	// 1000 0000 存到a里面
//	printf("%u\n", a);
//	//打印的是%u，首先整型提升，对于char类型来说整型提升补符号位
//	//1111 1111 1111 1111 1111 1111 1000 0000 -补码
//	//%u是无符号整型
//	//1111 1111 1111 1111 1111 1111 1000 0000 -原码
//	return 0;
//}


////输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//原码 0000 0000 0000 0000 0000 0000 1000 0000
//	//补码 0000 0000 0000 0000 0000 0000 1000 0000
//	//存到a里面的 1000 0000
//	printf("%u\n", a);
//	//打印%u，整型提升，char有符号
//	//补码 1111 1111 1111 1111 1111 1111 1000 0000
//	//%u无符号，原码补码相同1111 1111 1111 1111 1111 1111 1000 0000
//	return 0;
//}


////按照补码的形式进行运算，最后格式化成为有符号整数
//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	//原码 1000 0000 0000 0000 0000 0000 0001 0100
//	//补码 1111 1111 1111 1111 1111 1111 1110 1100
//	unsigned int j = 10;
//	//原码 0000 0000 0000 0000 0000 0000 0000 1010
//	//补码 0000 0000 0000 0000 0000 0000 0000 1010
//	printf("%d\n", i + j);
//	//两个补码相加
//	//i补码   1111 1111 1111 1111 1111 1111 1110 1100
//	//j补码   0000 0000 0000 0000 0000 0000 0000 1010
//	//i + j   1111 1111 1111 1111 1111 1111 1111 0110
//	//i+j原码 1000 0000 0000 0000 0000 0000 0000 1010
//	//结果是-10
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	//减到0后，-1应该跳出循环，但这里是无符号，本应该是-1的时候会变到无符号的最大值
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char a[1000];
//    int i;
//    for (i = 0; i < 1000; i++) //数组下标从0~999
//    {
//        a[i] = -1 - i;
//        //从数学角度来看，-1，-2，-3……-1000（-1-999）、
//        //char类型范围是-128~127
//        //所以减到-128后再减1会到127
//        //实际 -1，-2，-3......-127，-128，127，126，125......3，2，1，0 总共256个元素
//        //往后 -1，-2......-127，-128，127，126，125......3，2，1，0......
//        //循环直到1000个元素结束
//
//    }
//    printf("%d", strlen(a));
//    //求字符串长度，统计的是\0之前的字符个数，\0的ASCII码值就是0
//    //也就是说统计的是第一个0之前的元素，长度为255
//    return 0;
//}


#include <stdio.h>
unsigned char i = 0;
//范围是0~255
int main()
{
    //循环永远都在0~255范围内，所以死循环打印
    for (i = 0; i <= 255; i++)
    {
        printf("hello world\n");
    }
    return 0;
}









