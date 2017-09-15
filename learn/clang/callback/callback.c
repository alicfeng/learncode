#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef void (*pcb)(int a); //函数指针定义，后面可以直接使用pcb，方便
typedef struct parameter{
	int a ;
	pcb callback;
}parameter; 

void* callback_thread(void *p1)//此处用的是一个线程
{
	//do something
	parameter* p = (parameter*)p1 ;
//	while(1)
//	{
		printf("GetCallBack print! \n");
		sleep(3);//延时3秒执行callback函数
		p->callback(p->a);//函数指针执行函数，这个函数来自于应用层B
//	}
}

//留给应用层B的接口函数
extern SetCallBackFun(int a, pcb callback)
{
	printf("SetCallBackFun print! \n");
	parameter *p = malloc(sizeof(parameter)) ; 
	p->a  = 10;
	p->callback = callback;

	//创建线程
	pthread_t thing1;
	pthread_create(&thing1,NULL,callback_thread,(void *) p);
	pthread_join(thing1,NULL);
}
