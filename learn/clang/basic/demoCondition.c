/**
 * Created by alic(AlicFeng) on 17-7-29 from CLion.
 * Email is alic@samego.com
 */
//C语言的条件运算符

#include <stdio.h>

//if
void ifCondition(int score) {
    if (score >= 90) {
        printf("优秀\n");
    } else if (score >= 80) {
        printf("良好\n");
    } else if (score >= 60) {
        printf("及格\n");
    } else {
        printf("不及格\n");
    }
}

//switch
void switchCondition(int score) {
    switch (score / 10) {
        case 10:
        case 9:
            printf("优秀\n");
            break;
        case 8:
            printf("良好\n");
            break;
        case 7:
        case 6:
            printf("及格\n");
            break;
        default:
            printf("不及格\n");
            break;
    }
}

//三木运算
void simpleCondition(int score) {
    puts(score >= 60 ? "及格" : "不及格");
}

int main(){
    ifCondition(95);
    switchCondition(88);
    simpleCondition(38);
    return 0;
}

