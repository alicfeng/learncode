/**
 * Created by alic(AlicFeng) on 17-7-30 from CLion.
 * Email is alic@samego.com
 */
//C语言的指针函数
#include <stdio.h>
#include <stdlib.h>

//正常函数 指针调用
void sayPointer(){
    printf("hello pointer\n");
}

//指针参数的方法
void changeValue(int *value){
    *value = 100;
}

int main(){
    //example one
    void (*p)();
    p = sayPointer;
    p();

    //example two
    int value = 0;
    changeValue(&value);
    printf("the value is %d\n",value);

    return 0;
}
