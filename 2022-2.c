#include<stdio.h>
#include<windows.h>

int main()
{
    int n=0,m=0;
    int flag = 1;
    scanf("%d %d",&n,&m);
    for(int i = 1;i<n;i++)
    {
        for(int j = 1;j<n;j++)
        {
            if(i*2+j*4==m && i+j<=n && i>j)
            {
                printf("chicken has %d and rabbit has %d\n",i,j);
                flag = 0;
            }
        }
    }
    if(flag)
    {
        printf("No output solution");
    }
    Sleep(3000);
    return 0;
}