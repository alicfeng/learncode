#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc,char *argv[])
{
    int opt = 0;
    char s[50];
    while((opt=getopt(argc,argv,"f:h:"))!=-1)
    {
        switch(opt)
        {
            case 'f':
				printf("文件路径为: %s\n",optarg);
				break;
            case 'h':
				printf("我是帮助helper: %s\n",optarg);
				break; 
			default:
				printf("没有参数\n");
				break;
        }
    }
	return 0;
}
