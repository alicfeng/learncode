#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

#define DAV_CONFIG_PATH "./cfg.ini"

struct info_cfg{
	char name[20];
	char data[60];
};
/*获取指定字段（name）信息存入result中*/
int getCfgValue(char *key,char *value)
{
	char linebuffer[100] = {0};
	char buffer1[100] = {0};
	char buffer2[100] = {0};
	uint8_t flag = 0;
	int buffer_size=0;
	FILE *fp = fopen(DAV_CONFIG_PATH, "r");
	if(fp == NULL)
	{
		printf("open error");
		return 1;
	}
	while(1)
	{
		char *ret = fgets(linebuffer, 100, fp);
		if(ret == NULL)
		{
			break;
		}
		sscanf(linebuffer, "%[^=]=%[^=]", buffer1,buffer2);
		if(!strcmp(key, buffer1))
		{
			buffer_size=strlen(buffer2);
			memcpy(value,buffer2,buffer_size);
			value[buffer_size-1]='\0';//remove the \n
			flag = 1;
			break;   
		}
		memset(buffer1,0,sizeof(buffer1));
		memset(buffer2,0,sizeof(buffer2));
		memset(linebuffer,0,sizeof(linebuffer));
	}
	fclose(fp);
	if(flag != 1)
		return 1;
	return 0;
}

/*判断文件是否存在 1-存在  0-不存在*/
int fileAccess(){
	FILE *fp = fopen(DAV_CONFIG_PATH, "r");
	if(fp == NULL)
	{
		return 0;
	}else{
		fclose(fp);
		return 1;
	}
}


int main()
{
	int r =  fileAccess();
	if(r){
		printf("文件存在\n");
	}else{
		return 0;
	}
	char result[100] = {0};
	getCfgValue("age",result);
	printf("result:%s\n",result);
	return 0;
}
