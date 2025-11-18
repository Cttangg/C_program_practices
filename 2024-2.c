#include<stdio.h>
#include<windows.h>
int flac(int a)//return n!
{   
    int sum = 1;
    for(int i = 1;i <= a;i++)
    {
        sum *= i;
    }
    return sum;
}
int combine(int a,int b)
{
    int sum = 1;
    sum = flac(a)/(flac(b)*flac(a-b));
    return sum;
}
int main()
{
    int m=0,n=0;
    scanf("%d %d",&m,&n);
    if(m<n)
    {
        printf("error!");
    }else
    {
        printf("%d",combine(m,n));
    }
    Sleep(3000);
    return 0;
}