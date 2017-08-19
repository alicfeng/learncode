/**
 * Created by alic(AlicFeng) on 17-7-29 from CLion.
 * Email is alic@samego.com
 */
//输入输出
#include <stdio.h>

int main(int args, const char *argv){
    //单纯字符串输出
    puts("hello world");

    //格式化输出
    printf("hello %s\n","alicfeng");

    //输入
    char username[10];
    int age;
    gets(username);//很危险的做法 推荐不使用
    scanf("%d",&age);//参数-(类型,参数的地址)
    printf("%s age is %d\n",username,age);

    return 0;
}

