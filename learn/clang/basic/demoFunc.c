/**
 * Created by alic(AlicFeng) on 17-7-29 from CLion.
 * Email is alic@samego.com
 */
// C语言方法的调用
#include <stdio.h>

// 方法的声明和定义

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    printf("the max is %d\n",max(10,20));
    return 0;
}



