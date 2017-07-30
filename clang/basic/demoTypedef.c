/**
 * Created by alic(AlicFeng) on 17-7-30 from CLion.
 * Email is alic@samego.com
 */
//C语言的typedef关键字

#include <stdio.h>

//定义一个People的类型
typedef struct {
    int age;
    char *username;
} People;

void sayHello(){
    printf("hello world\n");
}
//定义一个指针指向一个方法
typedef void (*Func)();

int main(){
    People *people;
    people->age = 22;
    people->username = "alicfeng";
    printf("%s age is %d\n",people->username,people->age);

    //example two

    Func pointer = sayHello;
    pointer();

    return 0;
}

