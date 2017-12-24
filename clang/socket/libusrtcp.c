/**
 * Created by alic(AlicFeng) on 17-8-8 from CLion.
 * Email is alic@samego.com
 */
//

#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

int http_tcp_recv(int sockfd, void *buf, int bufsize) {
    int recv_len;
    recv_again:
    recv_len = recv(sockfd, buf, bufsize, 0);
    if (recv_len == 0) {
        return 0;
    } else if (recv_len == -1) {
        switch (recv_len) {
            //远程主机阻绝网络连接
            case ECONNREFUSE:
                break;
                //内存空间访问出错
            case EFAULT:
                goto recv_again;
                break;
                //操作被信号中断
            case EINTR:
                goto recv_again;
                break;
                //参数无效
            case EINVAL:
                break;
                //内存不足
            case ENOMEM:
                break;
                //与面向连接关联的套接字尚未被连接上
            case ENOTCONN:
                break;
            default:
                break;
        }
        return -1;
    }
    return recv_len;
}

int main() {
    char *s="string1 onexxx string2 oneyyy";
    char *p;
    p=strstr(s,"string2");
    printf("%s\n",p);
    return 0;
}