#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
    int a[6]={0};
    int target = 0;
    for(int i = 0;i < 6;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&target);
    int temp = 0;
    int value = 1000;
    for(int i = 0;i < 6-1;i++)
    {
        if(value > abs(a[i]*a[i+1]-target)){
            temp = i;
            value = abs(a[i]*a[i+1]-target);
        }
    }
    printf("%d*%d=%d",a[temp],a[temp+1],a[temp]*a[temp+1]);
    Sleep(3000);
    return 0;
}