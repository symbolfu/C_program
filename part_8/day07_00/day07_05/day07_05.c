#define _CRT_SECURE_NO_WARNINGS 1

/*
	动态内存分配：
		背景：
			全局变量是分配到内存中的静态存储区，非静态局部变量是分配到内存中的动态存储区，这个存储区叫栈stack；
			C语言还允许建立内存动态分配区域，以存放一些临时用的数据，需要时手动开辟，不需要时手动释放，这部分存储区叫堆heap；
			由于未在声明部分定义它们为变量或数组，因此不能通过变量名和数组名去引用这些数据，只能通过指针去引用；

		应用：
			用于构建数据结构，比如链表，FIFO等数据结构；

		创建内存的动态分配；头文件：<stdlib.h>
			malloc函数：
				函数原型：void * malloc(unsigned int size)
				作用：
					在内存的动态存储区中分配一个长度为size（size byte）的连续空间；返回申请空间的首地址；
					返回值为void *，即只提供一个纯地址、不带类型信息的指针；
					当执行不成功时，返回NULL；


			calloc函数：
				函数原型：void * calloc(unsigned int  n, unsiged int size)
				作用：
					在内存的动态存储区中分配n个长度为size（size byte）的连续空间；
					返回值为void *，即只提供一个纯地址、不带类型信息的指针；
					当执行不成功时，返回NULL；
				
			realloc函数：
				函数原型：void * realloc(void *p, unsigned int zise)
				作用：
					如果已经通过malloc和calloc函数申请了一段空间，想要改变其大小，可以用此函数；
					返回值为void *，即只提供一个纯地址、不带类型信息的指针；
					当执行不成功时，返回NULL；

			free函数：
				函数原型：void free(void * p)
				作用：
					释放指针变量p所指向的动态空间；仅仅是通知系统表示该段地址空间没有被使用，指针p的值函数并没有改变；

	void指针类型：
		能指向任何的类型的数据；
		在将void指针类型数据进行赋值时建议先强制转换类型，c语言中虽然编译器会帮我们做转换，但是c++中不会做，如果不转换就会报错；

		不通过void指针类型变量获取值，因为通过指针类型变量获取值需要具备两个条件：
			1、地址
			2、数据类型

		应用场景：
			在写通用接口函数时，为了使接口函数更加通用，经常会使用到void * 类型，通过接收者外出类型的转换满足自己的需求使用；


*/