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
				strcpy(s,optarg);
				printf("文件路径为: %s\n",s);
				break;
            case 'h':
				strcpy(s,optarg);
				printf("我是帮助helper: %s\n",s);
				break; 
			default:
				printf("没有参数\n");
				break;
        }
    }
	return 0;
}
