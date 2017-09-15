#include <stdio.h>
#include <string.h>
#include "./callback.c"

//-----------------------应用者B-------------------------------
void fCallBack(int a)       // 应用者增加的函数，此函数会在A中被执行
{
		//do something
		printf("a = %d\n",a);
		printf("fCallBack print! \n");
}


int main(void)
{
		SetCallBackFun(4,fCallBack);
		printf("----------------------");
		return 0;
}
