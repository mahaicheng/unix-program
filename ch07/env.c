/*************************************************************************
	> 文件名: env.c
	> 作者: 马海城
	> 邮箱: hchma@outlook.com
	> 创建日期: 2015年09月19日 星期六 17时03分12秒
 ************************************************************************/

#include<apue.h>
extern char** environ;
int main()
{
    int i;
    for(i = 0; environ[i] != NULL; ++i)
    {
        printf("%s\n", environ[i]);
    }
}

