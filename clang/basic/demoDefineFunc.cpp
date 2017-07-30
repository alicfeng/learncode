/**
 * Created by alic(AlicFeng) on 17-7-29 from CLion.
 * Email is alic@samego.com
 */
//C语言的宏定义方法

#include <stdio.h>

//定义宏方法 对于多行可以使用反斜杠
#define MAX(A, B) A>B?A:B

int main() {
    printf("the max value is %f\n",MAX(20.4,30.8));
    return 0;
}

