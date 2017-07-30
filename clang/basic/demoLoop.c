/**
 * Created by alic(AlicFeng) on 17-7-27 from CLion.
 * Email is alic@samego.com
 */
//C语言的循环
#include <stdio.h>

int main() {
    /*第一：for*/
    for (int i = 0; i < 10; ++i) {
        printf("hello %d\n", i);
    }

    for (int i = 0; i < 10; printf("hello %d\n", i++)) {
        printf("alicfeng\n");
    }


    /*第二：while*/
//    int index = 10;
//    do {
//        printf("hello %d\n", index--);
//    } while (index > 0);


    int index=0;
    while (index<10){
        printf("hello %d\n", index++);
    }
    return 0;
}

