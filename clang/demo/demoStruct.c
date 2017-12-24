/**
 * Created by alic(AlicFeng) on 17-7-30 from CLion.
 * Email is alic@samego.com
 */

#include <stdio.h>
#include <stdlib.h>
//结构体
typedef struct {
    int age;
    char *username;
} User;


int main(){
 printf("",);
    User *user = malloc(sizeof(User));
    user->age =20;
    user->username = "alicfeng";

    printf("size is %ld\n", sizeof(User));
    printf("%s age is %d\n",user->username,user->age);
    return 0;
}
