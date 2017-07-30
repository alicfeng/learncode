/**
 * Created by alic(AlicFeng) on 17-7-29 from CLion.
 * Email is alic@samego.com
 */
//C语言的宏定义

#include <stdio.h>

//定义宏 编译前已经准备好 因而速度很快
#define MATH_PI 3.14

int main(){
    printf("the PI value is %f\n",MATH_PI);
    return 0;
}


