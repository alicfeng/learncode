#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void trim(char *strIn, char *strOut){
	char *start, *end, *temp;//定义去除空格后字符串的头尾指针和遍历指针
	temp = strIn;
	while (*temp == ' '){
		++temp;
	}

	start = temp; //求得头指针
	temp = strIn + strlen(strIn) - 1; //得到原字符串最后一个字符的指针(不是'\0')

	while (*temp == ' '){
		--temp;
	}

	end = temp; //求得尾指针


	for(strIn = start; strIn <= end; ){
		*strOut++ = *strIn++;
	}

	*strOut = '\0';
}

void getValue(char * keyAndValue, char * key, char * value){

	char *p = keyAndValue;

	p = strstr(keyAndValue, key);
	if(p == NULL){
		//printf("没有key\n");
		return ;
	}

	p += strlen(key);
	trim(p, value);

	p = strstr(value, "=");
	if(p == NULL){
		printf("没有=\n");
		return;
	}
	p+= strlen("=");
	trim(p, value);

	p = strstr(value, "=");
	if(p != NULL){
		printf("多余的=\n");
		return;
	}
	p = value;
	trim(p, value);

}

void readCFG(const char *filename/*in*/, const char *key/*in*/, const char **value/*out*/){

	FILE *pf = NULL;
	char line[1024] = {0}, vtemp[1024] = {0};

	pf = fopen(filename, "r"); //以只读方式打开

	while(!feof(pf)){
		fgets(line, 1024, pf);
		getValue(line, key, vtemp);
		if(strlen(vtemp) != 0)
			break;
	}
	if(strlen(vtemp) != 0){
		*value = (char *)malloc(sizeof(char) * strlen(vtemp) + 1);
		strcpy(*value, vtemp);
	}    
	else
		*value = NULL;
	if(pf != NULL)
		fclose(pf);
}
