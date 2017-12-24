#include<stdio.h>
#include<stdlib.h>
#include <string.h>


//去除字符串首位空格
void trim(char *strIn, char *strOut);

//根据key得到value
void getValue(char * keyAndValue, char * key, char * value);

//写入配置文件
int writeCFG(const char *filename/*in*/, const char *key/*in*/, const char *value/*in*/);

//读取配置文件
void readCFG(const char *filename/*in*/, char *key/*in*/, const char **value/*out*/);

