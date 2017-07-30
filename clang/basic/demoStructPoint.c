/**
 * Created by alic(AlicFeng) on 17-7-27 from CLion.
 * Email is alic@samego.com
 */
//结构体指针

#include <stdio.h>
#include <stdlib.h>

struct User{
    int age;
    char *username;
};

int main(){
    //对结构体的变量需要开辟内存空间
    struct User *user = malloc(sizeof(struct User));
    user->age = 20;
    user->username = "alicfeng";

    struct User *user1 = user;
    user->age = 22;

    printf("%s age is %d\n",user1->username,user1->age);
    return 0;
}