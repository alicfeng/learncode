/**
 * Created by alic(AlicFeng) on 17-7-27 from CLion.
 * Email is alic@samego.com
 */
//结构体

#include <stdio.h>

/*定义一个结构体*/
struct User{
    int age;
    char *name;
};

int main(){
    struct User user;
    user.age = 20;
    user.name = "alicfeng";

    //复制一个结构体变量 但是新的变量已经分配新的内存空间
    struct User user1 = user;
    //对user的成员改变不会影响user1的值
    user.age = 21;

    printf("%s age is %d\n",user.name,user.age);
    printf("%s age is %d\n",user1.name,user1.age);
    return 0;
}

