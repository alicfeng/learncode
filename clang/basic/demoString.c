/**
 * Created by alic(AlicFeng) on 17-7-30 from CLion.
 * Email is alic@samego.com
 */
//C语言的字符串操作

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    /*字符串的拼接 sprintf*/
    char content[100];
    //void *memset(void *s,int c,size_t n)
    //将已开辟内存空间 s 的首 n 个字节的值设为值 c
    memset(content,0,100);

    //任意类型的值拼接成字符串
    sprintf(content,"hello %s;the value is %f or %d","alicfeng",98.5,100);
    printf("%s\n",content);

    /*memcpy用来做内存拷贝*/
    char *source = "hello world";
    char des[5];
    //开始拷贝
    memcpy(des,source+6* sizeof(char),5* sizeof(char));
    printf("%s\n",des);

    /*字符串拷贝*/
    char str1[10] = "alicfeng";
    char *str2 = malloc(10);//char str2[10];也可以
    strcpy(str2,str1);
    printf("str2 value is %s\n",str2);

    return 0;
}

