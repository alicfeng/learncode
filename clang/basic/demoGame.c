/**
 * Created by alic(AlicFeng) on 17-7-30 from CLion.
 * Email is alic@samego.com
 */
//C语言小游戏

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    //设置随机数的机制 否则产生的随机数是固定的值
    srand(time(NULL));
    //随机生成两位数的int
    int randValue = rand()%100;
    int userInput;
    printf("Hello 请输入两位数:\n");
    while(1){
        scanf("%d",&userInput);
        if (userInput>randValue){
            printf("数值过大\n");
        } else if (userInput<randValue){
            printf("数值过小\n");
        } else{
            printf("恭喜您,答对了!\n");
            break;
        }
    }
    return 0;
}

