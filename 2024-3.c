#include<stdio.h>
#include<windows.h>

int main()
{
    char str1[200]={},str2[200]={};
    gets(str1);
    for(int i = 0;i < strlen(str1);i++)
    {
        str2[i] = str1[strlen(str1)-i-1];
    }
    for(int i = 0;i < strlen(str1);i++)
    {
        printf("%c",str2[i]);
    }
    Sleep(3000);
    return 0;
}