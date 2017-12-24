#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cfgtool.c"
#define filename "cfg.ini"
void menu(){
	printf("===========================\n");
	printf("1 写入配置文件\n");
	printf("2 读取配置文件\n");
	printf("0 退出程序");
	printf("===========================\n");
}

int tWrite(){

	char key[1024] = {0}, value[1024] = {0};

	printf("请输入key:");
	scanf("%s", key);
	printf("请输入value:");
	scanf("%s", value);
	printf("\n您输入的是：%s = %s\n", key, value);

	return writeCFG(filename,key,value);
}

void tRead(){
	char key[1024] = {0}, *value;

	printf("请输入key:");
	scanf("%s", key);

	readCFG(filename,key, &value);
	if(value == NULL){
		printf("没有key\n");
		return ;
	}
	printf("\nvalue = %s\n", value);

	if(value != NULL){
		free(value);
		value = NULL;
	}

}
int main(){

	int choose;

	while(1){
		choose = 0;
		menu();
		printf("请输入选择:");
		scanf("%d", &choose);
		switch(choose){
			case 1:
				if(tWrite() == -1)
					return -1;
				break;
			case 2:
				tRead();
				break;
			case 0:
				return 0;
			default: 
				return 0;
		}
	}
	system("pause");
	return 0;
}
