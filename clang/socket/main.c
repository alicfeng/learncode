/**
 * Created by alic(AlicFeng) on 17-8-8 from CLion.
 * Email is alic@samego.com
 */
//
#include <stdio.h>
#include "http.h"

int main(){
    char *re = http_get("www.baidu.com");
    printf("%s",re);

    return 0;
}