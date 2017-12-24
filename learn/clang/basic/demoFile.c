/**
 * Created by alic(AlicFeng) on 17-7-30 from CLion.
 * Email is alic@samego.com
 */
//C语言的文件操作

#include <stdio.h>
#include <stdlib.h>

int main() {
    /*文件的写入 覆盖式写入*/
    //打开文件
    FILE *file = fopen("log", "w");
    //判断文件是否打开失败
    if (file != NULL) {
        for (int i = 0; i < 5; fprintf(file, "%d\n", ++i)) {
            printf("写 %d 入成功\n", i+1);
        }
    }
    //关闭文件
    fclose(file);

    /*文件的写入 追加式写入*/
    FILE *fileA = fopen("log", "a+");//以追加的方式写入
    if (NULL== fileA){
        perror("open file error");
        exit(1);
    }
    fputs("alic appending",fileA);
    fclose(fileA);

    /*文件的读取*/
    FILE *fileR = fopen("log", "r");
    //获取文件的大小
    //要将指针放置文件流的最末端 参数0为偏移量
    fseek(fileR, 0, SEEK_END);
    long size = ftell(fileR);
    //创建存放内容的缓冲区 并且还想在末端添加\0, 因而调大一个字节
    char buf[size + 1];
    //重新将指针置于文件的开始位置
    fseek(fileR, 0, SEEK_SET);
    fread(buf, sizeof(unsigned char), size, fileR);
    buf[size] = '\0';
    fclose(fileR);
    printf("%s\n", buf);

    /*文件重命名*/
    int result = rename("log", "data");
    printf("文件重命名%s\n", result == 0 ? "成功" : "失败");

    /*删除文件*/
    printf("删除文件%s\n", remove("data") ? "失败" : "成功");

    return 0;
}

